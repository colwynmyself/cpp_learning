from conans import ConanFile

class CPPLearning(ConanFile):
    name = "CPP Learning"
    requires = "boost/1.69.0@conan/stable"
    generators = 'cmake'

    def build(self):
        self.run('cmake . -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release')
        self.run('cmake --build .')
