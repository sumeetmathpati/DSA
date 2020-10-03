import os


def list_dirs(startpath):

	github_url = 'https://github.com/sumeetmathpati/Programming-and-data-structures/tree/master/'
	output_string = ''

	for root, dirs, files in os.walk(startpath):

		level = root.replace(startpath, '').count(os.sep)
		indent = '__ ' * (level)
		
		# print('[{}{}/]'.format(indent, os.path.basename(root)))

		output_string += '{} [{}]({}/)'.format(indent, os.path.basename(root), (github_url+root).replace(' ', '%20')) + '\n'
	
	return output_string

def main():

	before_list_text = '#Programming and Data Structures\n\n'
	after_list_text = ''

	dirst_list = list_dirs('.')

	final_string = before_list_text + dirst_list + after_list_text

	# print(final_string)

	readme_file = open('./README.md', 'w')
	readme_file.write(final_string)



if __name__ == "__main__":
	main()