from conans import ConanFile

class CPPLearning(ConanFile):
    name = "CPP Learning"
    requires = "boost/1.69.0@conan/stable"
    generators = 'cmake'
