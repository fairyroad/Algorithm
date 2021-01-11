/*programmers level2 printer*/

#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;

    queue<pair<int, int>> que;
    priority_queue<int> pque;
//priority queue, queue�� ���� vector���� push��Ŵ
    for (int i = 0; i < priorities.size(); i++) {
        //ó���� index��ȣ, �ι�°�� �߿䵵�� ����
        que.push(make_pair(i, priorities[i]));
        pque.push(priorities[i]);
    }

    while (!que.empty()) {
        //�׳� queue���� �ϳ��� pop���Ѽ� priorityqueue�� pop��Ų ���� �߿䵵�� ������ Ȯ��
        //�߿䵵�� ������ ���� �˰���� location������ check�ؾ��ϱ� ������ �׳� queue�� �̿��ϴ°�!!
        if (que.front().second == pque.top()) {
            if (que.front().first == location) {
                return answer + 1;
            }
            else {
                answer++;
                que.pop(); pque.pop();
            }
        }
        else {
            que.push(que.front());
            que.pop();
        }
    }
    return answer;
}