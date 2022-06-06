/**
 * strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 *
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_H_
#define _WM_STRINGS_H_

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! ABOVE WILL NOT WORK if you define in your sketch, must be build flag, if anyone one knows how to order includes to be able to do this it would be neat.. I have seen it done..

const char WM_VERSION_STR[] PROGMEM = "v2.0.11-beta";

const char HTTP_HEAD_START[] PROGMEM = "<!DOCTYPE html>"
                                       "<html lang='en'><head>"
                                       "<meta name='format-detection' content='telephone=no'>"
                                       "<meta charset='UTF-8'>"
                                       "<meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
                                       "<title>{v}</title>";

const char HTTP_SCRIPT[] PROGMEM = "<script>function c(l){"
                                   "document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
                                   "p = l.nextElementSibling.classList.contains('l');"
                                   "document.getElementById('p').disabled = !p;"
                                   "if(p)document.getElementById('p').focus();}</script>"; // @todo add button states, disable on click , show ack , spinner etc

const char HTTP_HEAD_END[] PROGMEM = "</head><body class='{c}'><div class='wrap'>"; // {c} = _bodyclass
                                                                                    // example of embedded logo, base64 encoded inline, No styling here
const char HTTP_ROOT_MAIN[] PROGMEM = "<img title=' alt=' src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAASwAAAEsCAYAAAB5fY51AAAACXBIWXMAAC4jAAAuIwF4pT92AAAGWmlUWHRYTUw6Y29tLmFkb2JlLnhtcAAAAAAAPD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNi4wLWMwMDIgNzkuMTY0NDYwLCAyMDIwLzA1LzEyLTE2OjA0OjE3ICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdEV2dD0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlRXZlbnQjIiB4bWxuczpwaG90b3Nob3A9Imh0dHA6Ly9ucy5hZG9iZS5jb20vcGhvdG9zaG9wLzEuMC8iIHhtbG5zOmRjPSJodHRwOi8vcHVybC5vcmcvZGMvZWxlbWVudHMvMS4xLyIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgMjEuMiAoTWFjaW50b3NoKSIgeG1wOkNyZWF0ZURhdGU9IjIwMjItMDQtMDZUMTI6MjQ6MjgrMDM6MDAiIHhtcDpNZXRhZGF0YURhdGU9IjIwMjItMDQtMDZUMTI6MjQ6MjgrMDM6MDAiIHhtcDpNb2RpZnlEYXRlPSIyMDIyLTA0LTA2VDEyOjI0OjI4KzAzOjAwIiB4bXBNTTpJbnN0YW5jZUlEPSJ4bXAuaWlkOjNlNGQzYjFkLWExZmMtNDU5Ni04MmE0LTg4NDMzMmNmZTU0ZiIgeG1wTU06RG9jdW1lbnRJRD0iYWRvYmU6ZG9jaWQ6cGhvdG9zaG9wOjBmOTM1ZmEzLWYyNDEtYWU0Yy1iNmRhLTc1OGQyMGNkODQyMiIgeG1wTU06T3JpZ2luYWxEb2N1bWVudElEPSJ4bXAuZGlkOjE2OGM3ODU0LTZjMGUtNGU5Ny05OGM3LWVlYTY2MDU4ODFhYiIgcGhvdG9zaG9wOkNvbG9yTW9kZT0iMyIgZGM6Zm9ybWF0PSJpbWFnZS9wbmciPiA8eG1wTU06SGlzdG9yeT4gPHJkZjpTZXE+IDxyZGY6bGkgc3RFdnQ6YWN0aW9uPSJjcmVhdGVkIiBzdEV2dDppbnN0YW5jZUlEPSJ4bXAuaWlkOjE2OGM3ODU0LTZjMGUtNGU5Ny05OGM3LWVlYTY2MDU4ODFhYiIgc3RFdnQ6d2hlbj0iMjAyMi0wNC0wNlQxMjoyNDoyOCswMzowMCIgc3RFdnQ6c29mdHdhcmVBZ2VudD0iQWRvYmUgUGhvdG9zaG9wIDIxLjIgKE1hY2ludG9zaCkiLz4gPHJkZjpsaSBzdEV2dDphY3Rpb249InNhdmVkIiBzdEV2dDppbnN0YW5jZUlEPSJ4bXAuaWlkOjNlNGQzYjFkLWExZmMtNDU5Ni04MmE0LTg4NDMzMmNmZTU0ZiIgc3RFdnQ6d2hlbj0iMjAyMi0wNC0wNlQxMjoyNDoyOCswMzowMCIgc3RFdnQ6c29mdHdhcmVBZ2VudD0iQWRvYmUgUGhvdG9zaG9wIDIxLjIgKE1hY2ludG9zaCkiIHN0RXZ0OmNoYW5nZWQ9Ii8iLz4gPC9yZGY6U2VxPiA8L3htcE1NOkhpc3Rvcnk+IDxwaG90b3Nob3A6RG9jdW1lbnRBbmNlc3RvcnM+IDxyZGY6QmFnPiA8cmRmOmxpPnhtcC5kaWQ6NDU1RkEzNzAwMjczRUMxMUJENTRBNjk3MkRDOTc4NDg8L3JkZjpsaT4gPC9yZGY6QmFnPiA8L3Bob3Rvc2hvcDpEb2N1bWVudEFuY2VzdG9ycz4gPC9yZGY6RGVzY3JpcHRpb24+IDwvcmRmOlJERj4gPC94OnhtcG1ldGE+IDw/eHBhY2tldCBlbmQ9InIiPz79vu/3AABRnUlEQVR42u2dd5xkR3Xvf6fqps49Oe1sDtLuKqwiCkggQAgQiPAw0QQHgm0ceDY2GOPwHn7ggElO2GSDeAbxbEtGYQVISCisNkharTbnydPTufvGqnp/dM9qJVbShpnZntn6fj4t7Uc7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' />";

const char *const HTTP_PORTAL_MENU[] PROGMEM = {
    "<form action='/wifi'    method='get'><button>Device Configuration</button></form><br/>\n",     // MENU_WIFI
    "<form action='/0wifi'   method='get'><button>Configure WiFi (No Scan)</button></form><br/>\n", // MENU_WIFINOSCAN
    "<form action='/info'    method='get'><button>Info</button></form><br/>\n",                     // MENU_INFO
    "<form action='/param'   method='get'><button>Setup</button></form><br/>\n",                    // MENU_PARAM
    "<form action='/close'   method='get'><button>Close</button></form><br/>\n",                    // MENU_CLOSE
    "<form action='/restart' method='get'><button>Restart</button></form><br/>\n",                  // MENU_RESTART
    "<form action='/exit'    method='get'><button>Exit</button></form><br/>\n",                     // MENU_EXIT
    "\n",                                                                                           // MENU_ERASE
    "<form action='/update'  method='get'><button>Update</button></form><br/>\n",                   // MENU_UPDATE
    "<hr><br/>"                                                                                     // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[] PROGMEM = "";
const char HTTP_ITEM_QI[] PROGMEM = ""; // rssi icons
const char HTTP_ITEM_QP[] PROGMEM = ""; // rssi percentage {h} = hidden showperc pref
const char HTTP_ITEM[] PROGMEM = "";    // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[] PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[] PROGMEM = "";
const char HTTP_FORM_WIFI_END[] PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<br/>";
const char HTTP_FORM_END[] PROGMEM = "<br/><br/><button type='submit'>Save</button></form>";
const char HTTP_FORM_LABEL[] PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[] PROGMEM = "<br/>";
const char HTTP_FORM_PARAM[] PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>\n"; // do not remove newline!

const char HTTP_SCAN_LINK[] PROGMEM = "";
const char HTTP_SAVED[] PROGMEM = "";
const char HTTP_PARAMSAVED[] PROGMEM = "<div class='msg S'>Saved<br/></div>";
const char HTTP_END[] PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[] PROGMEM = "";
const char HTTP_UPDATEBTN[] PROGMEM = "<br/><form action='/update' method='get'><button>Update</button></form>";
const char HTTP_BACKBTN[] PROGMEM = "<hr><br/><form action='/' method='get'><button>Back</button></form>";

const char HTTP_STATUS_ON[] PROGMEM = "<div class='msg S'><strong>Connected</strong> to {v}<br/><em><small>with IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[] PROGMEM = "<div class='msg {c}'><strong>Not Connected</strong> to {v}{r}</div>"; // {c=class} {v=ssid} {r=status_off}
const char HTTP_STATUS_OFFPW[] PROGMEM = "<br/>Authentication Failure";                                       // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[] PROGMEM = "";                                                                // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[] PROGMEM = "<br/>Could not Connect";                                          // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[] PROGMEM = "";
const char HTTP_BR[] PROGMEM = "<br/>";

const char HTTP_STYLE[] PROGMEM = "<style>"
                                  ".c,body{text-align:center;font-family:verdana}div,input,select{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box}"
                                  "input,button,select,.msg{border-radius:.3rem;width: 100%}input[type=radio],input[type=checkbox]{width:auto}"
                                  "button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
                                  "input[type='file']{border:1px solid #1fa3ec}"
                                  ".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
                                  // links
                                  "a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
                                  // quality icons
                                  ".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
                                  "background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
                                  // icons @2x media query (32px rescaled)
                                  "@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
                                  "background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
                                  "background-size: 95px 16px;}}"
                                  // msg callouts
                                  ".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
                                  // lists
                                  "dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
                                  "td{vertical-align: top;}"
                                  ".h{display:none}"
                                  "button{transition: 0s opacity;transition-delay: 3s;transition-duration: 0s;cursor: pointer}"
                                  "button.D{background-color:#dc3630}"
                                  "button:active{opacity:50% !important;cursor:wait;transition-delay: 0s}"
                                  // invert
                                  "body.invert,body.invert a,body.invert h1 {background-color:#060606;color:#fff;}"
                                  "body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
                                  "body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
                                  ":disabled {opacity: 0.5;}"
                                  "</style>";

#ifndef WM_NOHELP
const char HTTP_HELP[] PROGMEM = "";
#else
const char HTTP_HELP[] PROGMEM = "";
#endif

const char HTTP_UPDATE[] PROGMEM = "Upload New Firmware<br/><form method='POST' action='u' enctype='multipart/form-data' onchange=\"(function(el){document.getElementById('uploadbin').style.display = el.value=='' ? 'none' : 'initial';})(this)\"><input type='file' name='update' accept='.bin,application/octet-stream'><button id='uploadbin' type='submit' class='h D'>Update</button></form><small><a href='http://192.168.4.1/update' target='_blank'>* May not function inside captive portal, Open in browser http://192.168.4.1</a><small>";
const char HTTP_UPDATE_FAIL[] PROGMEM = "<div class='msg D'><strong>Update Failed!</strong><Br/>Reboot device and try again</div>";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "<div class='msg S'><strong>Update Successful.  </strong> <br/> Device Rebooting now...</div>";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
    "<script>function postAjax(url, data, success) {"
    "    var params = typeof data == 'string' ? data : Object.keys(data).map("
    "            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
    "        ).join('&');"
    "    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
    "    xhr.open('POST', url);"
    "    xhr.onreadystatechange = function() {"
    "        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
    "    };"
    "    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
    "    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
    "    xhr.send(params);"
    "    return xhr;}"
    "postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
    "postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
    "</script>";
#endif

// Info html
// @todo remove html elements from progmem, repetetive strings
#ifdef ESP32
const char HTTP_INFO_esphead[] PROGMEM = "<h3>esp32</h3><hr><dl>";
const char HTTP_INFO_chiprev[] PROGMEM = "<dt>Chip Rev</dt><dd>{1}</dd>";
const char HTTP_INFO_lastreset[] PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
const char HTTP_INFO_aphost[] PROGMEM = "<dt>Access Point Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_psrsize[] PROGMEM = "<dt>PSRAM Size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_temp[] PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd><dt>Hall</dt><dd>{3}</dd>";
#else
const char HTTP_INFO_esphead[] PROGMEM = "<h3>esp8266</h3><hr><dl>";
const char HTTP_INFO_fchipid[] PROGMEM = "<dt>Flash Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_corever[] PROGMEM = "<dt>Core Version</dt><dd>{1}</dd>";
const char HTTP_INFO_bootver[] PROGMEM = "<dt>Boot Version</dt><dd>{1}</dd>";
const char HTTP_INFO_lastreset[] PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
const char HTTP_INFO_flashsize[] PROGMEM = "<dt>Real Flash Size</dt><dd>{1} bytes</dd>";
#endif

const char HTTP_INFO_memsmeter[] PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_memsketch[] PROGMEM = "<dt>Memory - Sketch Size</dt><dd>Used / Total bytes<br/>{1} / {2}";
const char HTTP_INFO_freeheap[] PROGMEM = "<dt>Memory - Free Heap</dt><dd>{1} bytes available</dd>";
const char HTTP_INFO_wifihead[] PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[] PROGMEM = "<dt>Uptime</dt><dd>{1} Mins {2} Secs</dd>";
const char HTTP_INFO_chipid[] PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[] PROGMEM = "<dt>Flash Size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[] PROGMEM = "<dt>SDK Version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[] PROGMEM = "<dt>CPU Frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[] PROGMEM = "<dt>Access Point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[] PROGMEM = "<dt>Access Point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[] PROGMEM = "<dt>Access Point SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[] PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_stassid[] PROGMEM = "<dt>Station SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[] PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[] PROGMEM = "<dt>Station Gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[] PROGMEM = "<dt>Station Subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[] PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[] PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[] PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[] PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[] PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";

const char HTTP_INFO_aboutver[] PROGMEM = "";
const char HTTP_INFO_aboutarduino[] PROGMEM = "";
const char HTTP_INFO_aboutsdk[] PROGMEM = "";
const char HTTP_INFO_aboutdate[] PROGMEM = "";

const char S_brand[] PROGMEM = "WiFiManager";
const char S_debugPrefix[] PROGMEM = "*wm:";
const char S_y[] PROGMEM = "Yes";
const char S_n[] PROGMEM = "No";
const char S_enable[] PROGMEM = "Enabled";
const char S_disable[] PROGMEM = "Disabled";
const char S_GET[] PROGMEM = "GET";
const char S_POST[] PROGMEM = "POST";
const char S_NA[] PROGMEM = "Unknown";
const char S_passph[] PROGMEM = "********";
const char S_titlewifisaved[] PROGMEM = "Credentials Saved";
const char S_titlewifisettings[] PROGMEM = "Settings Saved";
const char S_titlewifi[] PROGMEM = "Config ESP";
const char S_titleinfo[] PROGMEM = "Info";
const char S_titleparam[] PROGMEM = "Setup";
const char S_titleparamsaved[] PROGMEM = "Setup Saved";
const char S_titleexit[] PROGMEM = "Exit";
const char S_titlereset[] PROGMEM = "Reset";
const char S_titleerase[] PROGMEM = "Erase";
const char S_titleclose[] PROGMEM = "Close";
const char S_options[] PROGMEM = "options";
const char S_nonetworks[] PROGMEM = "No networks found. Refresh to scan again.";
const char S_staticip[] PROGMEM = "Static IP";
const char S_staticgw[] PROGMEM = "Static Gateway";
const char S_staticdns[] PROGMEM = "Static DNS";
const char S_subnet[] PROGMEM = "Subnet";
const char S_exiting[] PROGMEM = "Exiting";
const char S_resetting[] PROGMEM = "Module will reset in a few seconds.";
const char S_closing[] PROGMEM = "You can close the page, portal will continue to run";
const char S_error[] PROGMEM = "An Error Occured";
const char S_notfound[] PROGMEM = "File Not Found\n\n";
const char S_uri[] PROGMEM = "URI: ";
const char S_method[] PROGMEM = "\nMethod: ";
const char S_args[] PROGMEM = "\nArguments: ";
const char S_parampre[] PROGMEM = "param_";

// debug strings
const char D_HR[] PROGMEM = "--------------------";

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

// -----------------------------------------------------------------------------------------------
// DO NOT EDIT BELOW THIS LINE

const uint8_t _nummenutokens = 11;
const char *const _menutokens[_nummenutokens] PROGMEM = {
    "wifi",
    "wifinoscan",
    "info",
    "param",
    "close",
    "restart",
    "exit",
    "erase",
    "update",
    "sep",
    "custom"};

const char R_root[] PROGMEM = "/";
const char R_wifi[] PROGMEM = "/wifi";
const char R_wifinoscan[] PROGMEM = "/0wifi";
const char R_wifisave[] PROGMEM = "/wifisave";
const char R_info[] PROGMEM = "/info";
const char R_param[] PROGMEM = "/param";
const char R_paramsave[] PROGMEM = "/paramsave";
const char R_restart[] PROGMEM = "/restart";
const char R_exit[] PROGMEM = "/exit";
const char R_close[] PROGMEM = "/close";
const char R_erase[] PROGMEM = "/erase";
const char R_status[] PROGMEM = "/status";
const char R_update[] PROGMEM = "/update";
const char R_updatedone[] PROGMEM = "/u";

// Strings
const char S_ip[] PROGMEM = "ip";
const char S_gw[] PROGMEM = "gw";
const char S_sn[] PROGMEM = "sn";
const char S_dns[] PROGMEM = "dns";

// softap ssid default prefix
#ifdef ESP8266
const char S_ssidpre[] PROGMEM = "ESP";
#elif defined(ESP32)
const char S_ssidpre[] PROGMEM = "ESP32";
#else
const char S_ssidpre[] PROGMEM = "WM";
#endif

// Tokens
//@todo consolidate and reduce
const char T_ss[] PROGMEM = "{";  // token start sentinel
const char T_es[] PROGMEM = "}";  // token end sentinel
const char T_1[] PROGMEM = "{1}"; // @token 1
const char T_2[] PROGMEM = "{2}"; // @token 2
const char T_3[] PROGMEM = "{3}"; // @token 2
const char T_v[] PROGMEM = "{v}"; // @token v
const char T_V[] PROGMEM = "{V}"; // @token v
const char T_I[] PROGMEM = "{I}"; // @token I
const char T_i[] PROGMEM = "{i}"; // @token i
const char T_n[] PROGMEM = "{n}"; // @token n
const char T_p[] PROGMEM = "{p}"; // @token p
const char T_t[] PROGMEM = "{t}"; // @token t
const char T_l[] PROGMEM = "{l}"; // @token l
const char T_c[] PROGMEM = "{c}"; // @token c
const char T_e[] PROGMEM = "{e}"; // @token e
const char T_q[] PROGMEM = "{q}"; // @token q
const char T_r[] PROGMEM = "{r}"; // @token r
const char T_R[] PROGMEM = "{R}"; // @token R
const char T_h[] PROGMEM = "{h}"; // @token h

// http
const char HTTP_HEAD_CL[] PROGMEM = "Content-Length";
const char HTTP_HEAD_CT[] PROGMEM = "text/html";
const char HTTP_HEAD_CT2[] PROGMEM = "text/plain";
const char HTTP_HEAD_CORS[] PROGMEM = "Access-Control-Allow-Origin";
const char HTTP_HEAD_CORS_ALLOW_ALL[] PROGMEM = "*";

const char *const WIFI_STA_STATUS[] PROGMEM{
    "WL_IDLE_STATUS",           // 0 STATION_IDLE
    "WL_NO_SSID_AVAIL",         // 1 STATION_NO_AP_FOUND
    "WL_SCAN_COMPLETED",        // 2
    "WL_CONNECTED",             // 3 STATION_GOT_IP
    "WL_CONNECT_FAILED",        // 4 STATION_CONNECT_FAIL, STATION_WRONG_PASSWORD(NI)
    "WL_CONNECTION_LOST",       // 5
    "WL_DISCONNECTED",          // 6
    "WL_STATION_WRONG_PASSWORD" // 7 KLUDGE
};

#ifdef ESP32
const char *const AUTH_MODE_NAMES[] PROGMEM{
    "OPEN",
    "WEP",
    "WPA_PSK",
    "WPA2_PSK",
    "WPA_WPA2_PSK",
    "WPA2_ENTERPRISE",
    "MAX"};
#elif defined(ESP8266)
const char *const AUTH_MODE_NAMES[] PROGMEM{
    "",
    "",
    "WPA_PSK", // 2 ENC_TYPE_TKIP
    "",
    "WPA2_PSK", // 4 ENC_TYPE_CCMP
    "WEP",      // 5 ENC_TYPE_WEP
    "",
    "OPEN",         // 7 ENC_TYPE_NONE
    "WPA_WPA2_PSK", // 8 ENC_TYPE_AUTO
};
#endif

const char *const WIFI_MODES[] PROGMEM = {"NULL", "STA", "AP", "STA+AP"};

#ifdef ESP32
// as 2.5.2
// typedef struct {
//     char                  cc[3];   /**< country code string */
//     uint8_t               schan;   /**< start channel */
//     uint8_t               nchan;   /**< total channel number */
//     int8_t                max_tx_power;   /**< This field is used for getting WiFi maximum transmitting power, call esp_wifi_set_max_tx_power to set the maximum transmitting power. */
//     wifi_country_policy_t policy;  /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US", 1, 11, CONFIG_ESP32_PHY_MAX_WIFI_TX_POWER, WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN", 1, 13, CONFIG_ESP32_PHY_MAX_WIFI_TX_POWER, WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP", 1, 14, CONFIG_ESP32_PHY_MAX_WIFI_TX_POWER, WIFI_COUNTRY_POLICY_AUTO};
#elif defined(ESP8266) && !defined(WM_NOCOUNTRY)
// typedef struct {
//     char cc[3];               /**< country code string */
//     uint8_t schan;            /**< start channel */
//     uint8_t nchan;            /**< total channel number */
//     uint8_t policy;           /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US", 1, 11, WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN", 1, 13, WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP", 1, 14, WIFI_COUNTRY_POLICY_AUTO};
#endif

/*
* ESP32 WiFi Events

0  SYSTEM_EVENT_WIFI_READY               < ESP32 WiFi ready
1  SYSTEM_EVENT_SCAN_DONE                < ESP32 finish scanning AP
2  SYSTEM_EVENT_STA_START                < ESP32 station start
3  SYSTEM_EVENT_STA_STOP                 < ESP32 station stop
4  SYSTEM_EVENT_STA_CONNECTED            < ESP32 station connected to AP
5  SYSTEM_EVENT_STA_DISCONNECTED         < ESP32 station disconnected from AP
6  SYSTEM_EVENT_STA_AUTHMODE_CHANGE      < the auth mode of AP connected by ESP32 station changed
7  SYSTEM_EVENT_STA_GOT_IP               < ESP32 station got IP from connected AP
8  SYSTEM_EVENT_STA_LOST_IP              < ESP32 station lost IP and the IP is reset to 0
9  SYSTEM_EVENT_STA_WPS_ER_SUCCESS       < ESP32 station wps succeeds in enrollee mode
10 SYSTEM_EVENT_STA_WPS_ER_FAILED        < ESP32 station wps fails in enrollee mode
11 SYSTEM_EVENT_STA_WPS_ER_TIMEOUT       < ESP32 station wps timeout in enrollee mode
12 SYSTEM_EVENT_STA_WPS_ER_PIN           < ESP32 station wps pin code in enrollee mode
13 SYSTEM_EVENT_AP_START                 < ESP32 soft-AP start
14 SYSTEM_EVENT_AP_STOP                  < ESP32 soft-AP stop
15 SYSTEM_EVENT_AP_STACONNECTED          < a station connected to ESP32 soft-AP
16 SYSTEM_EVENT_AP_STADISCONNECTED       < a station disconnected from ESP32 soft-AP
17 SYSTEM_EVENT_AP_STAIPASSIGNED         < ESP32 soft-AP assign an IP to a connected station
18 SYSTEM_EVENT_AP_PROBEREQRECVED        < Receive probe request packet in soft-AP interface
19 SYSTEM_EVENT_GOT_IP6                  < ESP32 station or ap or ethernet interface v6IP addr is preferred
20 SYSTEM_EVENT_ETH_START                < ESP32 ethernet start
21 SYSTEM_EVENT_ETH_STOP                 < ESP32 ethernet stop
22 SYSTEM_EVENT_ETH_CONNECTED            < ESP32 ethernet phy link up
23 SYSTEM_EVENT_ETH_DISCONNECTED         < ESP32 ethernet phy link down
24 SYSTEM_EVENT_ETH_GOT_IP               < ESP32 ethernet got IP from connected AP
25 SYSTEM_EVENT_MAX


typedef enum {
    ARDUINO_EVENT_WIFI_READY = 0,
    ARDUINO_EVENT_WIFI_SCAN_DONE,
    ARDUINO_EVENT_WIFI_STA_START,
    ARDUINO_EVENT_WIFI_STA_STOP,
    ARDUINO_EVENT_WIFI_STA_CONNECTED,
    ARDUINO_EVENT_WIFI_STA_DISCONNECTED,
    ARDUINO_EVENT_WIFI_STA_AUTHMODE_CHANGE,
    ARDUINO_EVENT_WIFI_STA_GOT_IP,
    ARDUINO_EVENT_WIFI_STA_GOT_IP6,
    ARDUINO_EVENT_WIFI_STA_LOST_IP,
    ARDUINO_EVENT_WIFI_AP_START,
    ARDUINO_EVENT_WIFI_AP_STOP,
    ARDUINO_EVENT_WIFI_AP_STACONNECTED,
    ARDUINO_EVENT_WIFI_AP_STADISCONNECTED,
    ARDUINO_EVENT_WIFI_AP_STAIPASSIGNED,
    ARDUINO_EVENT_WIFI_AP_PROBEREQRECVED,
    ARDUINO_EVENT_WIFI_AP_GOT_IP6,
    ARDUINO_EVENT_WIFI_FTM_REPORT,
    ARDUINO_EVENT_ETH_START,
    ARDUINO_EVENT_ETH_STOP,
    ARDUINO_EVENT_ETH_CONNECTED,
    ARDUINO_EVENT_ETH_DISCONNECTED,
    ARDUINO_EVENT_ETH_GOT_IP,
    ARDUINO_EVENT_ETH_GOT_IP6,
    ARDUINO_EVENT_WPS_ER_SUCCESS,
    ARDUINO_EVENT_WPS_ER_FAILED,
    ARDUINO_EVENT_WPS_ER_TIMEOUT,
    ARDUINO_EVENT_WPS_ER_PIN,
    ARDUINO_EVENT_WPS_ER_PBC_OVERLAP,
    ARDUINO_EVENT_SC_SCAN_DONE,
    ARDUINO_EVENT_SC_FOUND_CHANNEL,
    ARDUINO_EVENT_SC_GOT_SSID_PSWD,
    ARDUINO_EVENT_SC_SEND_ACK_DONE,
    ARDUINO_EVENT_PROV_INIT,
    ARDUINO_EVENT_PROV_DEINIT,
    ARDUINO_EVENT_PROV_START,
    ARDUINO_EVENT_PROV_END,
    ARDUINO_EVENT_PROV_CRED_RECV,
    ARDUINO_EVENT_PROV_CRED_FAIL,
    ARDUINO_EVENT_PROV_CRED_SUCCESS,
    ARDUINO_EVENT_MAX
} arduino_event_id_t;

typedef union {
    wifi_event_sta_scan_done_t wifi_scan_done;
    wifi_event_sta_authmode_change_t wifi_sta_authmode_change;
    wifi_event_sta_connected_t wifi_sta_connected;
    wifi_event_sta_disconnected_t wifi_sta_disconnected;
    wifi_event_sta_wps_er_pin_t wps_er_pin;
    wifi_event_sta_wps_fail_reason_t wps_fail_reason;
    wifi_event_ap_probe_req_rx_t wifi_ap_probereqrecved;
    wifi_event_ap_staconnected_t wifi_ap_staconnected;
    wifi_event_ap_stadisconnected_t wifi_ap_stadisconnected;
    wifi_event_ftm_report_t wifi_ftm_report;
    ip_event_ap_staipassigned_t wifi_ap_staipassigned;
    ip_event_got_ip_t got_ip;
    ip_event_got_ip6_t got_ip6;
    smartconfig_event_got_ssid_pswd_t sc_got_ssid_pswd;
    esp_eth_handle_t eth_connected;
    wifi_sta_config_t prov_cred_recv;
    wifi_prov_sta_fail_reason_t prov_fail_reason;
} arduino_event_info_t;

*/
#endif
