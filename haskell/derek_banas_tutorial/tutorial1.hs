-- Single line comment
{-
    - multi-line comment
-}

-- Import some modules. A module is just a whole bunch of functions I'll be able to use
import Data.List
import System.IO

-- Int  (the range of ints is from -2^63 to 2^63)
maxInt = maxBound :: Int -- "::" declares the datatype
minInt = minBound :: Int

-- Floats

-- Doubles
bigFloat = 3.999999999999999 + 0.000000000000005

-- Bool True False
-- Char (single Unicode characters, denoted with single quotes
-- Tuples (are lists that can store many different data types. However they only ever have 2 values)

always5 :: Int
always5 = 5

-- Lists (the main Haskell data structure)
-- The below is a list that sums all numbers from 1 to 1000
sumOfNums = sum [1..1000]

-- Arithmetic
-- Infix operators
addEx = 5 + 4
subEx = 5 - 4
multEx = 5 * 4
divEx= 5 / 4

-- Prefix operators
modEx = mod 4 5 -- this will be interpreted the same as 4 % 5
modEx2 = 5 `mod` 4 -- This will accomplish the same task, but instead in an 'infix' style

-- make sure to put negative numbers in parens
negNumEx = 5 + (-4)

-- working with sqrt
--      sqrt :: Floating a => a -> a
num9 = 9 :: Int
sqrtOf9 = sqrt (fromIntegral num9)

-- some more built in math functions:
piVal = pi
ePow9 = exp 9
logOf9 = log 9
squared9 = 9 ** 2
truncateVal = truncate 9.999
roundVal = round 9.999
ceilingVal = ceiling 9.999
floorVal = floor 9.999

-- Also sin, cos, tan, asin, atan, acos, sinh, tanh, cosh, asinh, atanh, acosh

-- Working with Bools!

trueAndFalse = True && False
trueOrFalse = True || False
notTrue = not(True)

-- LISTS!!!
--  you can't just jump around in a list, you have to access the first member first
primeNumbers = [3, 5, 7, 11]
-- "++" means "concatenate"
morePrime = primeNumbers ++ [13, 17, 19, 23, 29]
-- "[]" signifies the end of the list
favNums = 2 : 7 : 21 : 66 : []
-- We can put lists inside of lists
multList = [[3, 5, 7], [11, 13, 17]]
-- We CAN add values to the front of a list
morePrimes2 = 2 : morePrime

lenPrime = length morePrimes2
revPrime = reverse morePrimes2
isListEmpty = null morePrimes2
secondPrime = morePrimes2 !! 1
firstPrime = head morePrimes2
lastPrime = last morePrimes2
tailPrimes = tail morePrimes2
primeInit = init morePrimes2
is7InList = 7 `elem` morePrimes2
maxPrime = maximum morePrimes2
minPrime = minimum morePrimes2
zeroToTen = [0..10]
evenList = [2,4..20]
letterList = ['A','C'..'Z']
-- While the below list is infinite, it's still fine to generate an infinite list and then
-- access the Nth member, because the list will only generate up to the Nth member before
-- abandoning iterating the list. In other words, this list is generated during runtime
infinPow10 = [10,20..]

many2s = take 10 (repeat 2)

many3s = replicate 10 3
many3sv2 = 10 `replicate` 3

cycleList = take 8 (cycle [1,2,3,4,5])

-- pull a value out of the list, temporarily store it in 'x', apply "x * 2"
listTimes2 = [x * 2 | x <- [1..10]]
-- in other words, this says,
    -- for each x in list, multiply x * 2, output as list

-- filter results
listTimes3 = [x * 3 | x <- [1..10], x * 3 <= 16]

divisBy9N13 = [x | x <- [1..500], x `mod` 13 == 0, x `mod` 9 == 0]

sortedList = sort [9,1,8,3,4,7,6,2,5]

sumOfLists = zipWith (+) [1,2,3,4,5] [6,7,8,9,10]
