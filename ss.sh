#!/bin/bash

# Lấy danh sách các file thay đổi và file mới
files=$(git ls-files --modified --others --exclude-standard)

if [ -z "$files" ]; then
    echo "Không có thay đổi nào để commit."
    exit 0
fi

# Dùng 'while read' để xử lý tên file có khoảng trắng
echo "$files" | while IFS= read -r file; do
    echo "Đang commit: $file"
    git add "$file"
    
    # Kiểm tra xem đường dẫn file có bắt đầu hoặc chứa "Homework/" không
    if [[ "$file" == *"Homework/"* ]]; then
        # Nếu nằm trong thư mục Homework
        git commit -m "upload bài tập: $file"
    else
        # Nếu là các file ở thư mục khác
        git commit -m "Hoàn thành: $file"
    fi
done

# Tùy chọn: Tự động push sau khi commit xong tất cả
git push