# dwmblocks

I'm using dwmblocks to configure the dwm status bar.

## Installation ##

```
cd suckless-tools/dwmblocks
make && sudo make install
```

dwmblocks start with autostart patches from dwm.

```
sudo bash -c 'cat << EOF > $HOME/.local/share/dwm/autostart.sh
dwmblocks & 
EOF'
```

## Scripts installation

dwmblocks uses scripts to display information on the statusbar.

```
git clone https://github.com/eiie/scripts.git
cp scripts/* $HOME/.local/bin/
```
