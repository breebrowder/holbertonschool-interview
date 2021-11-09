#!/usr/bin/python3
""" Task 0. Lockboxes """


def canUnlockAll(boxes):
    """ boxes is a list of lists """
    """ A key with the same number as a box opens that box """
    """ You can assume all keys will be positive integers """
    """ The first box boxes[0] is unlocked """
    """ Return True if all boxes can be opened, else return False """

    unlocked_Box = [0]
    pos_keys = boxes[0]
    for key in pos_keys:
        if key not in unlocked_Box:
            try:
                pos_keys.extend(boxes[key])
                unlocked_Box.append(key)
            except:
                continue
    if len(unlocked_Box) == len(boxes):
        return True
    return False
