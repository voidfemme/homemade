-- Here's a comment
in_range min max x =
	x >= min && x <= max

in_range 0 5 3
	=> True

in_range 4 5 3
	=> False

-- Types
x :: Integer
x = 1

y :: Bool
y = True

z :: Float
z = 3.1415

-- functions are their own types. You write them as a list of types 
in_range :: Integer -> Integer -> Integer -> Bool
in_range min max x = x >= min

-- Recursion
fac n =
	if n <= 1 then
	1
	else n * fac (n-1)

-- Guards
fac n
	| n <= 1
	|otherwise = n * fac (n-1)
	-- You can have as many guards as you want. These are if, then, then, then .... else statements

--
