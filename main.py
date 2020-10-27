class World:
	def __init__(self, row, col):
		self.main=[]
		for i in range(row):
			l = []
			for j in range(col):
				l.append(None)

			self.main.append(l)
