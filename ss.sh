#!/bin/bash

# Kiểm tra nhanh xem có file nào cần commit không
if [ -z "$(git ls-files --modified --others --exclude-standard)" ]; then
    echo "Không có thay đổi nào để commit."
    exit 0
fi

# Dùng 'git ls-files -z' và 'read -d $'\0'' để đọc an toàn tuyệt đối mọi tên file
while IFS= read -r -d $'\0' file; do
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
done < <(git ls-files -z --modified --others --exclude-standard)

# Tùy chọn: Tự động push sau khi commit xong tất cả
git push