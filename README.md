#
#Install Rasp Kernal Headers
#
sudo apt-get install raspberrypi-kernel-headers

#
# Install Git Command Tools
#
curl -fsSL https://cli.github.com/packages/githubcli-archive-keyring.gpg | sudo dd of=/usr/share/keyrings/githubcli-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/githubcli-archive-keyring.gpg] https://cli.github.com/packages stable main" | sudo tee /etc/apt/sources.list.d/github-cli.list > /dev/null
sudo apt update
sudo apt install gh

#
# Create Directors
#
mkdir Programming
cd Programming
mkdir Linux_Driver_Tutorial
cd Linux_Driver_Tutorial

#
# Create Repository
#

git init -b main
git add . && git commit -m "initial commit"

#
# Follow promts
#
gh repo create 
