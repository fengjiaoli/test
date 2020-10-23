CREATE TABLE `t_user1` (
  `id` int(2) NOT NULL AUTO_INCREMENT,
  `name` char(20) NOT NULL,
  `useremail` char(20) NOT NULL,
  `PASSWORD` char(20) NOT NULL,
  `number` int(3) unsigned NOT NULL,
  PRIMARY KEY (`id`),
  KEY `t_user_name` (`name`),
  KEY `t_user_email` (`useremail`),
  KEY `index_number` (`number`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8

SELECT * from t_user1;
explain SELECT * from t_user1 where useremail = '123@qq.com';
alter table t_user1 add number int(3) unsigned not Null ;
desc t_user1;
update t_user1 set number = 16 where id=3;
create INDEX index_number on t_user1(number);
explain SELECT * from t_user1 where number = 2; -- 使用了索引
explain SELECT * from t_user1 where number > 2;-- 使用了索引
explain SELECT * from t_user1 where useremail like '123@qq.com';-- 使用了索引
-- explain SELECT * from t_user1 where useremail like '123%';-- 有没有使用了索引（有待论证）
explain SELECT * from t_user1 where useremail like '%123%';-- 没使用了索引
