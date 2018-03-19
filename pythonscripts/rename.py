import os

filed = open("youknow.txt","r")

fp = filed.readlines()
path = "M:\\shows\\friends\\Friends Season 1\\english subtitles"
p = 'M:/'
files = os.listdir(p)
x = 0

print files
for i in files:
    po = os.path.join(p,i)
    to = os.path.join(p,fp[x].rstrip())
    print po
    print to
    os.rename(po, to)
    x = x+1

