# Quality of script is BAD but works for me *wink*

import configparser
import io
import zipfile
import os 
import urllib
import urllib.parse
import urllib.request
import shutil

file_path = os.path.dirname(os.path.realpath(__file__))
temp_folder = os.path.join(file_path, "temp")

parser = configparser.ConfigParser()
parser.read("packs.ini")

os.mkdir(temp_folder)

for s in parser.sections():
    extract_to = os.path.join(file_path, s)
    download_from = parser[s]["url"]
    
    url_parts = urllib.parse.urlparse(download_from)
    path_parts = url_parts[2].rpartition('/')
    download_to = os.path.join(temp_folder, path_parts[2])

    print("Downloading...")
    print(s, download_from)
    urllib.request.urlretrieve(download_from, download_to)
    print("Downloaded!")


    print("Unzipping...")
    zip_ref = zipfile.ZipFile(download_to, 'r')
    zip_ref.extractall(extract_to)
    zip_ref.close()
    print("Unzipped!")
    
shutil.rmtree(temp_folder)