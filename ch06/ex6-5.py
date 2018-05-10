# 예제 6-5 파이썬을 사용해 JSON 파싱하기

import json
import urllib2

httpResponse = urllib2.urlopen(
  'http://nextmakemagazine.appspot.com/json'
)
jsonString = httpResponse.read()

jsonData = json.loads(jsonString)

print "Volumn", jsonData['volumnNumber'], "will be released in",
  \ jsonData['totalHours'], "hours."
