<?php
//1 -> to find if it's a leap year or not

function isLeapYear($year) {
	if ($year % 4 == 0) {
		if ($year % 100 == 0 && $year != 400) {
			return false; // not aleap year
		} else {
			return true; // is a leap year
		} 
	}
	else {
		return false; // not a leap year
	}
}

$yearToCheck = 2024;

if(isLeapYear($yearToCheck)) {
	echo $yearToCheck , " is a leap year";
}
else {
	echo $yearToCheck , " is not a leap year";
}
?>



<?php 
// 2 -> php program to reverse a number
$originalNumber = 1234;
$term = 1234;
$reverseNumber = 0;

while ($term > 0) {
	$digit = $term % 10;
	$reverseNumber = $reverseNumber * 10 + $digit;
	$term = (int)($term / 10);
} 

echo "originalNumber: " , $originalNumber;
echo "<br>";
echo "reverseNumber: " , $reverseNumber;
?>



<?php 
// 3 -> if number is pallindrome or not
function isPallindrome($num) {
	$originalNumber = $num;
	$reverseNumber = 0;
	while ($num > 0) {
		$digit = $num % 10;
		$reverseNumber = $reverseNumber * 10 + $digit;
		$num = (int)($num / 10);
	}
	if ($reverseNumber == $originalNumber) {
		return true;
	}
}

$number = 100;
if (isPallindrome($number)) {
	echo $number , " is pallindrome";
} else {
	echo $number , " is not pallindrome";
}
?>



<?php 
//4 -> to find factorial of a number

function factorial($num) {
	if ($num == 0 || $num == 1) {
		return 1;
	}
	else {
		$fact = 1;
		for ($i = $num; $i >= 1; $i--) {
			$fact = $fact * $i;
		}
		return $fact;
	}
}

$number = 5;
$result = factorial($number);
echo "Factorial of $number is: $result";
?>



<?php 
// 5 -> table of number
$num = 7;
for ($i = 1; $i <= 10; $i++) {
	$res = $num * $i;
	echo "$num X $i = $res";
	echo "<br>";
}
?>



<?php
// 6 -> check prime number
function isPrime($num) {
	if ($num <= 1) {
		return false; // 0 and 1 are not prime numbers
	}
	for ($i = 2; $i <= $num/2; $i++) {
		if ($num % $i == 0) {
			return false;
		}
	}
	return true;
}

$number = 1;
if (isPrime($number)) {
	echo "$number is a prime number";
}
else {
	echo "$number is not a prime number";
}
?>



<?php 
//7 -> print dum of digits
// $num = 1234;
$temp = 1284;

$digit = 0;
while ($temp > 0) {
	$digit = $temp % 10;
	$sum = $sum + $digit;
	$temp = (int)($temp / 10);
}
echo "Sum is: $sum";
?>



<?php 
// 9 -> Swap without using a third variable
$a = 5;
$b = 10;

echo "Before swapping: a = $a, b = $b\n";

$a = $a + $b;
$b = $a - $b;
$a = $a - $b;

echo "After swapping without third variable: a = $a, b = $b\n";
?>



<?php 
//10 -> to check armstrong number

function isArmstrong($num) {
	$temp = $num;
	$sum = 0;
	while ($num > 0) {
		$digit = $num % 10;
		$sum = $sum + ($digit * $digit * $digit);
		$num = (int)($num / 10);
	}
	if ($sum == $temp) {
		return true;
	}
	// return $temp == $sum; 
}
$number = 153;
if (isArmstrong($number)) {
	echo "$number is armstrong";
}
else {
	echo "$number is not armstrong";
}
?>



<?php 
//1. Write a Program to display count, from 5 to 15 using PHP while loop.
$start = 5;
while ($start <= 15) {
	echo "$start"; //use "\n" for spaces
	echo "<br>";
	$start++;
}
?>



<?php 
// 2. Write a PHP program using nested for loop that creates a chess board.
$rows = 8;
$cols = 8;

echo "<table border = '1'>";

for ($i = 1; $i <= $rows; $i++) {
	echo "<tr>";

	for ($j = 1; $j <= $cols; $j++) {
		$sum = $i + $j;
		if ($sum % 2 == 0) {
			echo "<td style='width: 30px; height: 30px; background-color: #fff;'></td>";
		} else {
			echo "<td style='width: 30px; height: 30px; background-color: #000;'></td>";
		}
	}
	echo "<tr>";
}
echo "</table>";

?>



<?php 
// 4. You need to write a PHP program to calculate electricity bill using if-else conditions.
// Conditions:
// • For first 50 units – Rs. 3.50/unit
// • For next 100 units – Rs. 4.00/unit
// • For next 100 units – Rs. 5.20/unit
// • For units above 250 – Rs. 6.50/unit
function calculateElectricityBill($units) {
	$totalBill = 0;
	if ($units <= 50) {
		$totalBill = $units * 3.50;
	} elseif ($units <= 150) {
		$totalBill = 50 * 3.50 + ($units - 50) * 4.00;
	} elseif ($units <= 250) {
		$totalBill = 50 * 3.50 + 100 * 4.00 + ($units - 150) * 5.20;
	} else {
		$totalBill = 50 * 3.50 + 100 * 4.00 + 100 * 5.20 + ($units - 250) * 6.50;
	}
	return $totalBill;
}

$unitsConsumed = 180;
$billAmount = calculateElectricityBill($unitsConsumed);

echo "Units Consumed: $unitsConsumed";
echo "<br>";
echo "Electricity Bill: $billAmount";
?>



<?php 
//  5. Create a menu driven program in PHP to do following:
// Operations:
// • Addition
// • Subtraction
// • Multiplication 
// • Division

echo "Menu";
echo "<br>";
echo "1. Addition";
echo "<br>";
echo "2. Subtraction";
echo "<br>";
echo "3. Multiplication";
echo "<br>";
echo "4. Division";
echo "<br>";

$num1 = 10;
$num2 = 5;

$choice = 3;
switch ($choice) {
	case 1:
		$sum = $num1 + $num2;
		echo "Addition result: $sum";
		break;
	case 2:
		$sub = $num1 - $num2;
		echo "Subtraction result: $sub";
		break;
	case 3:
		$mul = $num1 * $num2;
		echo "Multiplication result: $mul";
		break;
	case 4:
		$div = $num1 / $num2;
		echo "Division result: $div";
		break;
	default:
		echo "Invalid choice";
}
?>



<?php 
// 6. Write a PHP program to check if a person is eligible to vote or not using function.
function isEligible($age) {
	if ($age >= 18) {
		return true;
	} else {
		return false;
	}
}
$personAge = 9;
if (isEligible($personAge)) {
	echo "Can vote";
} else {
	echo "Cannot vote";
}
?>



<?php
$str = "This is riya";
echo "$str";
$lenn = strlen($str);
echo "<br>", $lenn;
?>


<?php 
//associative array
$color = array( 'Rohan' => 'red',
				'Riya' => 'brown',
				'Lika' => 'pink',
				8 => 'this'
			  );
// echo $color['Riya'] , "<br>";
// echo $color['Lika'], "<br>";
// echo $color[8];

foreach($color as $key => $value) {
	echo "Value of $key is $value <br>";
}

//index array
$color1 = array("red", "blue", "green", "black");
for ($i = 0; $i <= count($color1); $i++) {
	echo "<br>",  $color1[$i];
}
?>



<?php 
//multidimensional arrays
$multiDim = array(
					array(1,2,3,4),
					array(5,6,7,8),
					array(9,10,11,12)
				);
// echo var_dump($multiDim);
// echo $multiDim[1][3];
for ($i = 0; $i <= count($multiDim); $i++) {
	for ($j = 0; $j <= count($multiDim[$i]); $j++) {
		echo $multiDim[$i][$j];
		echo " ";
	}
	echo "<br>";
}
?>



<?php 
// 1
// 22
// 333
// 4444
// 55555
$row = 5;
$col = 5;
for ($i = 1; $i <= $row; $i++) {
	for ($j = 1; $j <= $i; $j++) {
		echo "$i";
	}
	echo "<br>";
}


for ($i = 0; $i <= $row; $i++) {
	for ($j = 0; $j <= $i; $j++) {
		if (($i + $j) % 2 == 0) {
			echo "1";
		}
		else {
			echo "0";
		}
	}
	echo "<br>";
}


for ($i = $rows; $i > 0; $i--) {
    for ($j = 0; $j < $i; $j++) {
        echo "&";
    }
    echo "<br>";
}

?>



