#!/bin/bash

# Kiểm tra nhanh xem có file nào cần commit không
if [ -z "$(git ls-files --modified --others --exclude-standard)" ]; then
    echo "Không có thay đổi nào để commit."
    exit 0
fi

# Đọc an toàn mọi tên file
while IFS= read -r -d $'\0' file; do
    
    # BƯỚC TEST BUILD: 
    # Chỉ test NẾU là file .cpp VÀ NẾU đường dẫn có chứa "Homework/"
    if [[ "$file" == *.cpp && "$file" == *"Homework/"* ]]; then
        echo "Đang test build bài tập: $file..."
        g++ -fsyntax-only "$file" 2>/dev/null
        
        if [ $? -ne 0 ]; then
            echo "❌ LỖI BIÊN DỊCH: $file -> Bỏ qua, không commit file này!"
            echo "---------------------------------"
            continue # Bỏ qua, nhảy sang file tiếp theo
        fi
        echo "✅ Build OK!"
    fi

    # Tiến hành commit cho file hợp lệ (hoặc file không cần test)
    echo "Đang commit: $file"
    git add "$file"
    
    # Phân loại tin nhắn commit
    if [[ "$file" == *"Homework/"* ]]; then
        git commit -m "upload bài tập: $file"
    else
        git commit -m "Hoàn thành: $file"
    fi
    
    echo "---------------------------------"
done < <(git ls-files -z --modified --others --exclude-standard)

# Tự động đẩy code lên mạng
git push