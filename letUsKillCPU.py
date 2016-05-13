import threading
import math
import random
import argparse

class MyThread ( threading.Thread ) :
	def run(self):
		while True:
			print math.sqrt(math.sqrt(random.randint(1,1000)));
                
def parse_cmdline_args():
	parser = argparse.ArgumentParser(description='Run tests');
	parser.add_argument('--thread', dest='thread',default=None, help='thread');
	args = parser.parse_args();
	return args;
 
def main (args):
	run_me = [];
	for i in range(0,int(args.thread)):
		run_me.append(MyThread());
		run_me[i].start();


if __name__ == '__main__':
	args = parse_cmdline_args();
	main(args);	
