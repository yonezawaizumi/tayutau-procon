# 2015�N7��8�����{ �Г��v���R��

2015�N7��8���Ɏ��{���ꂽ�Г��v���R�� Lucky! �̏����Ȃ���񓚂ł��B

## ����

    1����100�܂ł̐�����1�s���o�͂���B
    �������A7�̂�����"Lucky!"�ɒu�������ďo�͂��邱�ƁB
    
    ��).
    1
    2
    3
    4
    5
    6
    Lucky!
    8
    ... �ȗ� ...
    14
    15
    16
    Lucky!
    18
    19
    20
    21
    ... �ȗ� ...
    68
    69
    Lucky!
    Lucky!
    ... �ȗ� ...
    Lucky!
    Lucky!
    Lucky!
    80
    81
    ... �ȗ� ...
    96
    Lucky!
    98
    99
    100

## ���M�����[�V����

* 1�l1�R�[�h�̂�
* �����ŋ��L�T�[�o�[�̏���̃t�H���_�[�ɒ�o
* ��o�҂̖��O��ސ�������悤�ȃR�����g��t�@�C�����͋p��
* �g�p����� C�EC#�EPHP �̂����ꂩ

## ��o�R�[�h

### [procon1_submit.c](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon1_submit.c)

* C�ŏ����Ă������������肷��Ƃ������ނ���PHP�����u�������v���߁A������o
* ���s�X�s�[�h�����̂͊o��̏�ipaiza.io �Ŏ��s���Ă݂��Ƃ���A���l��]����ɔ䂵��1.5�{�߂����v���ԁj
* �������I **`int main()` �Ȃ̂� return �����Ȃ��I �Ƃ����ɍ��̃~�X** �c�i������ paiza.io �ŃG���[�ɂȂ�Ȃ��񂾂���c�j
* 11�̃R�[�h���񂹂��A�������[������A���͏�L��肩�玩�����g�ɂ͓��[�����A���ʂƂ���2�[��5�R�[�h�Ƃ����ǂ񂮂�w��׏�Ԃ̂��� 1�ɂ͑I�΂�܂���

## �e�R�[�h���

### [procon1_submit.c](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon1_submit.c)

* C�ŏ����Ă������������肷��Ƃ������ނ���PHP�����u�������v������
* sprintf �� %d ��n���Ă���킯�ŁA���̒��ňÖق̂����Ɂu10�Ŋ����ď�]���o�́v�Ƃ������[�v�����s����Ă���A�������B������Ă���
* ���W�b�N�̎��s�X�s�[�h�� paiza.io ���ׂ� 1.10ms
* ���s�X�s�[�h���x���̂́Asprintf �� %d �����߂��邾���ł͂Ȃ�����

### [procon2.c](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon2.c)

* ���炩��3����700�ԑ�ɑΉ����Ă��Ȃ����菑���o�[�W����
* ���W�b�N�̎��s�X�s�[�h�� paiza.io ���ׂ� 0.74ms

### [procon3.c](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon3.c)

* �������낤�ƕ������낤�ƑΉ������o�[�W�����ŁAprocon2.c �̃}�g���ȃo�[�W����

### [procon4.c](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon4.c)

* �ǂ���1�`100����œ��삷��̂Ȃ�����ƍ����ɂ�����Ƃ����J���J���`���[���o�[�W����
* ���W�b�N�̎��s�X�s�[�h�� paiza.io ���ׂ� 0.10ms�_(^o^)�^
* �ėp�Ή�����ɂ� do �u���b�N�̒��� if �u���b�N�̓��e���ڐ݂���΂悢���A1�`100�ł��̂܂܎��s���Ă݂��Ƃ���킸���ɃX�s�[�h��������
* �����炭�Ado �u���b�N�̒��Ŗ������Ƃ� v % 10 == 7 ���ǂ����̏������򂪑��邱�Ƃ����Ǝv����
* ���Ado �u���b�N�ɂ���Ɣ͈͂� 0 ���܂܂��ꍇ�ɂ���肠��܂��ˁi0 ����ʈ������Ȃ��Ƌ���s�ɂȂ�j

### [procon1.php](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon1.php)

* ���ꂪ����o�����2���Ԃōŏ��ɏ����グ���R�[�h
* procon1_submit.c ��������ɒZ���A��������Ή����s�v�����A"\n" ���O�����Z�q�� : �̗����ɏ����Ă���Ƃ��낪�u�������v�Ȃ�
* C �� puts �̑�(��)

### [procon2.php](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon2.php)

* LL �Ő��l�ƕ�����������������ɏ������Ƃɉ��̈Ӗ������邩�킩��Ȃ����A����� procon2.c �̃v���g�^�C�v�łł�

### [procon.scala](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon.scala)

* �l�����́u���W�b�N�Ɋւ��Ẵq���g�����ŏ������vScala �v���O����
* �܂� Scala �S�R�킩���ĂȂ��Ă����̒��x�͏�����Ƃ���Ɋ���
* paiza.io �̎��s�X�s�[�h�͂߂��߂��d�߂��܂���(;_;)

### [procon.hs](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon.hs)

* �l�����́u���W�b�N�Ɋւ��Ẵq���g�����ŏ������vHaskell �v���O����
* �ꉞ�A�������{�� 1�N�O�ɂ��Ȃ����Ƃ͂����AHaskell �S�R�킩���Ă܂���
* �����񂪕����̃��X�g�Ȃ̂ŁA�������ȒP�ɏ�����񂾂Ȃ��Ɗ���
* �����AmapM_ ���g��Ȃ��ŏo�͂��悤�Ƃ��āAI/O���i�h���S��㩂Ɍ����Ƀn�}��܂����ireturn () �ɒH�蒅�����AputStr "" �Ƃ������Ă����A�t�H�j

### [professor.scala](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/professor.scala) (�}�C�t����)

* (���̍� 7/9 �ǋL)
* �ƁA�ȏ�����J�����Ƃ���A���̃v���O���~���O�̂��t�����񂩂�\�b�R�[�Ŋ񂹂��܂����� Scala �R�[�h��
* �Ȃ�ƃ������C�i�[���ł��郁�\�b�h��`�Ȃ��A���������t������
* ���\�b�h�Ȃ񂩎g��Ȃ��Ă� match ���Ŏ������
* �����x���̒����S�҂͂����u�����ɂ��֐��^�v�ȃJ�b�R�������Ă��܂��ăY�b�R�P�܂����A�Ƃ����݂��Ƃ��Ȃ��b
* [procon.scala](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon.scala) �ł� `foreach(x => println(x))` �Ƃ��Ă܂������A�����Ɩ߂�l�̌^���킩�肫���Ă���Ƃ��͏ȗ��\�Ȃ̂� `foreach(println)` �ł悢
