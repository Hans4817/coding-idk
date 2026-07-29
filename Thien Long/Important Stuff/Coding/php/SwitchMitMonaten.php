<?php
$datum = getdate();
$monat = $datum["mon"];
switch ($monat) {
	case 1:
	print "Januar";
	break;
	case 2:
	print "Februar";
	break;
	case 3:
	print "März";
	break;
	case 4:
	print "April";
	break;
	case 5:
	print "Mai";
	break;
	case 6:
	print "Juni";
	case 7:
	print "Juli";
	break;
	case 8:
	print "August";
	break;
	case 9:
	print "September";
	break;
	case 10:
	print "Oktober";
	break;
	case 11:
	print "November";
	break;
	case 12:
	print "Dezember";
	
	break;
	default:
	print "Diesen Monat gibt es nicht!";
}
?>