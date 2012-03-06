function showPic (whichpic) {
 if (document.getElementById) {
  document.getElementById('placeholder').src = whichpic.href;
  if (whichpic.title) {
   document.getElementById('desc').childNodes[0].nodeValue = whichpic.title;
  }
  return false;
 } else {
  return true;
 }
}