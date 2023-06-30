import hashlib
class Codec:
    
    def __init__(self):
        self.res = {}
    def hash_to(self, s):
        return 'https://tin.e/' + hashlib.md5(s.encode()).hexdigest()
    
    def encode(self, longUrl: str) -> str:
        """Encodes a URL to a shortened URL.
        """
        url = self.hash_to(longUrl)
        self.res[url] = longUrl
        return url
        

    def decode(self, shortUrl: str) -> str:
        """Decodes a shortened URL to its original URL.
        """
        return self.res[shortUrl]
        

# Your Codec object will be instantiated and called as such:
# codec = Codec()
# codec.decode(codec.encode(url))