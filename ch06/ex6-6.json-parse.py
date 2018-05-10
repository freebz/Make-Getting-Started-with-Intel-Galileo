# 예제 6-6 JSON 파싱을 위해 파이썬 사용하기

import json
import urllib2

httpResponse = urllib2.urlopen(
  'http://nextmakemagazine.appspot.com/json'
)
jsonString = httpResponse.read()

jsonData = json.loads(jsonString)

print jsonData['daysAway']
