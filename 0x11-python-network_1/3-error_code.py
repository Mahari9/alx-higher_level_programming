#!/usr/bin/python3
"""Script that takes in a URL, sends a request to the URL and displays\
the body of the response (decoded in utf-8).
 - Manage urllib.error.HTTPError exceptions and print: Error code:
   followed by the HTTP status code
 - Must use the packages urllib and sys
"""
import sys
import urllib.error
import urllib.request


if __name__ == "__main__":
    url = sys.argv[1]

    request = urllib.request.Request(url)
    try:
        with urllib.request.urlopen(request) as response:
            print(response.read().decode("ascii"))
    except urllib.error.HTTPError as e:
        print("Error code: {}".format(e.code))
