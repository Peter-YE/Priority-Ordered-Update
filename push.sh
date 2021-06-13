git add .
dateStr=`date -u -v "+0H" +"%d-%m-%Y %H:%M:%S"`
echo "${dataStr}"
git commit --date="$(date -R)"
git pull origin main
git push -u origin main
