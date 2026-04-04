#!/bin/bash

# Lấy danh sách các file thay đổi và file mới
files=$(git ls-files --modified --others --exclude-standard)

if [ -z "$files" ]; then
    echo "Không có thay đổi nào để commit."
    exit 0
fi

# Dùng 'while read' để đọc nguyên vẹn từng dòng (bỏ qua khoảng trắng)
echo "$files" | while IFS= read -r file; do
    echo "Đang commit: $file"
    git add "$file"
    git commit -m "Hoàn thành bài tập: $file"
done

# Tùy chọn: Tự động push sau khi commit xong tất cả
git push