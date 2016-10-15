This is my LZ77 implementation.

Excerpt from [Wikipedia](https://en.wikipedia.org/wiki/LZ77_and_LZ78):
> LZ77 algorithms achieve compression by replacing repeated occurrences of data with references to a single copy of that
> data existing earlier in the uncompressed data stream. A match is encoded by a pair of numbers called a length-distance
> pair, which is equivalent to the statement "each of the next length characters is equal to the characters exactly distance
> characters behind it in the uncompressed stream".

I'll be trying to do everything with modern C++.