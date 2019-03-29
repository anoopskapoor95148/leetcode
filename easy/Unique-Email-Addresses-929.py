# 36ms
class Solution(object):
    def numUniqueEmails(self, emails):
        d = collections.defaultdict(int)
        for ss in emails:
            local, domain = ss.split('@')
            local = local.split('+')[0]
            local = local.replace('.', '')

            d[local+domain] += 1
        return len(d)
