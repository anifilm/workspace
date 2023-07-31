using System;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Chapter.Singleton
{

    public class GameManager : Singleton<GameManager>
    {
        private DateTime _sessionStartTime;
        private DateTime _sessionEndtime;

        void Start()
        {
            // TODO:
            // - 플레이어 세이브 로드
            // - 세이브가 없으면 플레이어를 등록 씬으로 리다이렉션한다
            // - 백엔드를 호출하고 일일 챌리지와 보상을 얻는다
            _sessionStartTime = DateTime.Now;
            Debug.Log("Game session start @: " + DateTime.Now);
        }

        void OnApplicationQuit()
        {
            _sessionEndtime = DateTime.Now;

            TimeSpan timeDifference = _sessionEndtime.Subtract(_sessionStartTime);

            Debug.Log("Game session ended @: " + DateTime.Now);
            Debug.Log("Game session lasted: " + timeDifference);
        }

        void OnGUI()
        {
            if (GUILayout.Button("Next Scene"))
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
            }
        }

    }
}
