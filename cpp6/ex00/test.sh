make re

echo 'TEST1:   ./ex00 0'
./ex00 0
echo
echo 'TEST2:   ./ex00 nan'
./ex00 nan
echo
echo 'TEST3:   ./ex00 42.00f'
./ex00 42.00f
echo
echo 'TEST4:   ./ex00 "a"'
./ex00 a
echo
echo 'TEST5:   ./ex00 -42'
./ex00 -42
echo
echo 'TEST6:   ./ex00 +inff'
./ex00 +inff

make fclean
