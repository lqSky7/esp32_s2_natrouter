#define CONFIG_PAGE "<html>\
<head>\
<title>VIT IOE PROJECT</title>\
<meta name='viewport' content='width=device-width, initial-scale=1'>\
<style>\
body {\
font-family: apercu-pro, -apple-system, system-ui, BlinkMacSystemFont, 'Helvetica Neue', sans-serif;\
padding: 1em;\
line-height: 2em;\
font-weight: 100;\
background: linear-gradient(135deg,#000000,#070814,#A587DE,#0C0E25);\
background-size: 400% 400%;\
animation: gradient 15s ease infinite;\
color: #fff;\
}\
\
@keyframes gradient {\
0% { background-position: 0% 50%; }\
50% { background-position: 100% 50%; }\
100% { background-position: 0% 50%; }\
}\
\
td {\
font-weight: 100;\
min-height: 24px;\
}\
\
td:first-child {\
text-align: right;\
min-width: 100px;\
padding-right: 10px;\
}\
\
h1 {\
font-size: 1.5em;\
font-weight: 200;\
margin-bottom: 1em;\
}\
\
h2 {\
font-size: 1.2em;\
font-weight: 200;\
margin-left: 5px;\
margin-top: 1em;\
}\
\
input {\
border: 1px solid rgb(196, 196, 196);\
color: rgb(76, 76, 76);\
width: 240px;\
border-radius: 3px;\
height: 40px;\
margin: 3px 0px;\
padding: 0px 14px;\
background: rgba(255, 255, 255, 0.1);\
backdrop-filter: blur(10px);\
}\
\
input:focus {\
border: 1px solid black;\
outline: none !important;\
box-shadow: 0 0 10px #719ECE;\
}\
\
#config {\
width: 400px;\
margin: 0 auto;\
background: rgba(255, 255, 255, 0.1);\
backdrop-filter: blur(10px);\
border-radius: 10px;\
padding: 2em;\
box-shadow: 0 0 20px rgba(0, 0, 0, 0.5);\
animation: fadeIn 1s ease-in-out;\
}\
\
@keyframes fadeIn {\
0% { opacity: 0; transform: translateY(20px); }\
100% { opacity: 1; transform: translateY(0); }\
}\
\
.ok-button {\
background-color: #0078e7;\
color: #fff;\
border: none;\
cursor: pointer;\
transition: all 0.3s;\
}\
\
.ok-button:hover {\
background-color: #005fa3;\
}\
\
.red-button {\
background-color: #e72e00;\
color: #fff;\
border: none;\
cursor: pointer;\
transition: all 0.3s;\
}\
\
.red-button:hover {\
background-color: #b32400;\
}\
\
small {\
color: #ccc;\
}\
\
#moving-object {\
position: fixed;\
width: 50px;\
height: 50px;\
background: rgba(255, 255, 255, 0.5);\
border-radius: 50%;\
top: 50%;\
left: 50%;\
transform: translate(-50%, -50%);\
animation: move 10s linear infinite;\
}\
\
@keyframes move {\
0% { transform: translate(-50%, -50%) rotate(0deg); }\
100% { transform: translate(-50%, -50%) rotate(360deg); }\
}\
</style>\
</head>\
<body>\
<div id='moving-object'></div>\
<div id='config'>\
<h1>IOE WIFI-EXTENDER PROJECT</h1>\
<script>\
if (window.location.search.substr(1) != '')\
{\
document.getElementById('config').style.display = 'none';\
document.body.innerHTML ='<h1>ESP32 NAT Router Config</h1>The new settings have been sent to the device.\
The page will refresh soon automatically...';\
setTimeout(\"location.href = '/'\",10000);\
}\
</script>\
<h2>AP Settings (the new network)</h2>\
<form action='' method='GET'>\
<table>\
<tr>\
<td>SSID</td>\
<td><input type='text' name='ap_ssid' value='%s' placeholder='SSID of the new network'/></td>\
</tr>\
<tr>\
<td>Password</td>\
<td><input type='text' name='ap_password' value='%s' placeholder='Password of the new network'/></td>\
</tr>\
<tr>\
<td></td>\
<td><input type='submit' value='Set' class='ok-button'/></td>\
</tr>\
</table>\
<small>\
<i>Password </i>less than 8 chars = open\
</small>\
</form>\
\
<h2>STA Settings (uplink WiFi network)</h2>\
<form action='' method='GET'>\
<table>\
<tr>\
<td>SSID</td>\
<td><input type='text' name='ssid' value='%s' placeholder='SSID of existing network'/></td>\
</tr>\
<tr>\
<td>Password</td>\
<td><input type='text' name='password' value='%s' placeholder='Password of existing network'/></td>\
</tr>\
<tr>\
<td colspan='2'>WPA2 Enterprise settings. Leave blank for regular</td>\
</tr>\
<tr>\
<td>Enterprise username</td>\
<td><input type='text' name='ent_username' value='%s' placeholder='WPA2 Enterprise username'/></td>\
</tr>\
<tr>\
<td>Enterprise identity</td>\
<td><input type='text' name='ent_identity' value='%s' placeholder='WPA2 Enterprise identity'/></td>\
</tr>\
<tr>\
<td></td>\
<td><input type='submit' value='Connect' class='ok-button'/></td>\
</tr>\
</table>\
</form>\
\
<h2>STA Static IP Settings</h2>\
<form action='' method='GET'>\
<table>\
<tr>\
<td>Static IP</td>\
<td><input type='text' name='staticip' value='%s'/></td>\
</tr>\
<tr>\
<td>Subnet Mask</td>\
<td><input type='text' name='subnetmask' value='%s'/></td>\
</tr>\
<tr>\
<td>Gateway</td>\
<td><input type='text' name='gateway' value='%s'/></td>\
</tr>\
<tr>\
<td></td>\
<td><input type='submit' value='Connect' class='ok-button'/></td>\
</tr>\
</table>\
<small>\
<i>Leave it in blank if you want your ESP32 to get an IP using DHCP</i>\
</small>\
</form>\
\
<h2>Device Management</h2>\
<form action='' method='GET'>\
<table>\
<tr>\
<td>Device</td>\
<td><input type='submit' name='reset' value='Reboot' class='red-button'/></td>\
</tr>\
</table>\
</form>\
</div>\
</body>\
</html>\
"

#define LOCK_PAGE "<html>\
<head>\
<title>VIT IOE PROJECT</title>\
<meta name='viewport' content='width=device-width, initial-scale=1'>\
<style>\
body {\
font-family: apercu-pro, -apple-system, system-ui, BlinkMacSystemFont, 'Helvetica Neue', sans-serif;\
padding: 1em;\
line-height: 2em;\
font-weight: 100;\
background: linear-gradient(135deg, #1a2a6c, #b21f1f, #fdbb2d);\
background-size: 400% 400%;\
animation: gradient 15s ease infinite;\
color: #fff;\
}\
\
@keyframes gradient {\
0% { background-position: 0% 50%; }\
50% { background-position: 100% 50%; }\
100% { background-position: 0% 50%; }\
}\
\
td {\
font-weight: 100;\
min-height: 24px;\
}\
\
td:first-child {\
text-align: right;\
min-width: 100px;\
padding-right: 10px;\
}\
\
h1 {\
font-size: 1.5em;\
font-weight: 200;\
margin-bottom: 1em;\
}\
\
h2 {\
font-size: 1.2em;\
font-weight: 200;\
margin-left: 5px;\
margin-top: 1em;\
}\
\
input {\
border: 1px solid rgb(196, 196, 196);\
color: rgb(76, 76, 76);\
width: 240px;\
border-radius: 3px;\
height: 40px;\
margin: 3px 0px;\
padding: 0px 14px;\
background: rgba(255, 255, 255, 0.1);\
backdrop-filter: blur(10px);\
}\
\
input:focus {\
border: 1px solid black;\
outline: none !important;\
box-shadow: 0 0 10px #719ECE;\
}\
\
#config {\
width: 400px;\
margin: 0 auto;\
background: rgba(255, 255, 255, 0.1);\
backdrop-filter: blur(10px);\
border-radius: 10px;\
padding: 2em;\
box-shadow: 0 0 20px rgba(0, 0, 0, 0.5);\
animation: fadeIn 1s ease-in-out;\
}\
\
@keyframes fadeIn {\
0% { opacity: 0; transform: translateY(20px); }\
100% { opacity: 1; transform: translateY(0); }\
}\
\
.ok-button {\
background-color: #0078e7;\
color: #fff;\
border: none;\
cursor: pointer;\
transition: all 0.3s;\
}\
\
.ok-button:hover {\
background-color: #005fa3;\
}\
\
.red-button {\
background-color: #e72e00;\
color: #fff;\
border: none;\
cursor: pointer;\
transition: all 0.3s;\
}\
\
.red-button:hover {\
background-color: #b32400;\
}\
\
small {\
color: #ccc;\
}\
\
#moving-object {\
position: fixed;\
width: 50px;\
height: 50px;\
background: rgba(255, 255, 255, 0.5);\
border-radius: 50%;\
top: 50%;\
left: 50%;\
transform: translate(-50%, -50%);\
animation: move 10s linear infinite;\
}\
\
@keyframes move {\
0% { transform: translate(-50%, -50%) rotate(0deg); }\
100% { transform: translate(-50%, -50%) rotate(360deg); }\
}\
</style>\
</head>\
<body>\
<div id='moving-object'></div>\
<div id='config'>\
<h1>ESP32 NAT Router Config</h1>\
<script>\
if (window.location.search.substr(1) != '')\
{\
document.getElementById('config').style.display = 'none';\
document.body.innerHTML ='<h1>ESP32 NAT Router Config</h1>The new settings have been sent to the device.\
The page will refresh soon automatically...';\
setTimeout(\"location.href = '/'\",1000);\
}\
</script>\
<h2>Config Locked</h2>\
<form autocomplete='off' action='' method='GET'>\
<table>\
<tr>\
<td>Password:</td>\
<td><input type='password' name='unlock_password'/></td>\
</tr>\
<tr>\
<td></td>\
<td><input type='submit' value='Unlock' class='red-button'/></td>\
</tr>\
</table>\
<small>\
<i>Default: STA password to unlock\
</small>\
</form>\
</div>\
</body>\
</html>\
"
