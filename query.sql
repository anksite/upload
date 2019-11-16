MERGE INTO tb_rank AS TARGET
USING (VALUES('125', 135)) AS Source(id, score)
ON TARGET.id = Source.id
WHEN MATCHED THEN
UPDATE SET TARGET.score = 135
WHEN NOT MATCHED BY TARGET THEN
INSERT(id, score) VALUES('125', 135);
              
SELECT player.name, rank.score FROM tb_rank rank, tb_player player where rank.user_id = player.user_id

INSERT INTO tb_rank(user_id,score) VALUES ('tes',100) ON DUPLICATE KEY UPDATE score = 100 
              
INSERT INTO tb_player VALUES('fesserg100', 'Way Free')
