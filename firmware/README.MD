<h1>! Rename before trying to upgrade !</h1>
<h3>Download the firmware image you are interested in loading onto your printer.
<br>**Pay special attention to the name and the date!**</h3>
In order to successfully load the firmware, you need to remove the <b>_name</b> component of the firmware image file name.<br>
For example, you would need to rename:<br>
<code>firmware<b>_james</font></b>-20210117-160000.bin</code> to: <code>firmware-20210117-160000.bin</code><br>
<br>
<h3>DWIN & Display</h3>
<ol>
  <li>Download the DWIN folder into the root directory of a specially formatted microSD card</li>
  <li>Turn off printer</li>
  <li>format 8Gb microSD card</li>
  <ul>
    <li>Windows-R</li>
    <li>type in cmd</li>
    <li>press enter</li>
    <li>format /q <b>g</b>:/fs:fat32/a:4096  <b>(note: use correct drive ID)</b></li>
  </ul>
  <li>Insert the microSD card into the LCD screen's microSD card slot and power the printer on</li>
  <li>turn on printer</li>
  <li>you may need to repeat the process for the LCD to flash successfully</li>
</ol>
