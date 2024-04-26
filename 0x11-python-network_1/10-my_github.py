#!/usr/bin/python3
"""Script that takes your GitHub credentials (username and password) and\
   uses the GitHub API to display your id.
   - Must use the package requests and sys
"""
import sys
import requests


if __name__ == '__main__':
    if len(sys.argv) > 2:
        url = "https://api.github.com/user"
        username = sys.argv[1]
        password = sys.argv[2]
        req_headers = {
            'Accept': 'application/vnd.github.v3+json',
            'Username': username,
            'Authorization': 'token {}'.format(password),
        }
        response = requests.get(url, headers=req_headers)
        if response.status_code == 200:
            user = response.json()
            if user['login'] == username:
                print(user['id'])
            else:
                print('None')
        else:
            print('None')
