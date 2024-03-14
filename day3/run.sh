make c
for i in {1..1000}
do
	./c < ./testy/$i.in > out
	if diff -w ./testy/$i.out out; then
		echo "Test $i OK"
	else
		echo "Cos sie wywalilo ://"
		echo "Wejscie:"
		cat ./testy/$i.in
		echo "Moj program:"
		cat out
		echo "Rozw:"
		cat ./testy/$i.out
		break
	fi
done
