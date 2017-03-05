#ex00 test
echo "\n EX00 TEST"
make re -C ex00/
./ex00/Colleen > tmp_Colleen
make fclean -C ex00/
res=$(diff tmp_Colleen ex00/Colleen.c)
if [ $? -eq 0 ]
then
	echo "------------------------------------------->ex00: OK"
else
	echo "------------------------------------------->ex00: KO"
	echo $res
fi
#ex01 test
echo "\n EX01 TEST"
make re -C ex01/
./ex01/Grace
make fclean -C ex01/
res=$(diff ex01/Grace.c Grace_kid.c)
if [ $? -eq 0 ]
then
	echo "------------------------------------------->ex01: OK"
else
	echo "------------------------------------------->ex01: KO"
	echo $res
fi
#ex02 test
echo "\n EX02 TEST"
make re -C ex02/
# make clean -C ex02/
cd ex02/SullyTest/
./Sully
echo "\ndifferences in files Sully.c and Sully_1.c"
res=$(diff ../Sully.c Sully_1.c)
echo $res
echo "\ndifferences in files Sully_3.c and Sully_2.c"
res=$(diff Sully_3.c Sully_2.c)
echo $res
res=$(ls -al | grep Sully | wc -l)
if [ $res == 13 ]
then
	echo "------------------------------------------->ex02: OK"
else
	echo "------------------------------------------->ex02: KO"
	echo $res
fi
cd ../..
make fclean -C ex02/