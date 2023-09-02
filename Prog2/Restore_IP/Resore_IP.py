def restore_ip_addresses(s):
    def backtrack(s, segments, current_ip, result):
        # Base case: If all segments are formed and the entire string is consumed, add the current IP to the result
        if segments == 4 and not s:
            result.append(current_ip[:-1])
            return

        # Base case: If all segments are formed but some part of the string is remaining, return
        if segments == 4 or not s:
            return

        # Explore different choices for the current segment
        for i in range(1, min(4, len(s) + 1)):
            segment = s[:i]
            # Check for the validity of the segment
            if segment[0] == '0' and len(segment) > 1 or int(segment) > 255:
                break

            # Recursively backtrack for the remaining string and next segment
            backtrack(s[i:], segments + 1, current_ip + segment + '.', result)

    result = []
    backtrack(s, 0, '', result)
    return result


# Test the function
s = "25525511135"
restored_ips = restore_ip_addresses(s)
print(restored_ips)
