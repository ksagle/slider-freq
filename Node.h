#ifndef NODE_H
#define NODE_H

#include <GL/glew.h>
#include <GL/gl.h> 
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/matrix_operation.hpp>

class Mesh;

class Node {
public:
    Node();

    void SetPosition(glm::vec3 pos);
    void SetPosition(float x, float y, float z);

    void SetMesh(Mesh *pMesh);
    
    void SetRotation(glm::vec3 rot);
    void SetRotation(float x, float y, float z);

    void SetScale(glm::vec3 scale);
    void SetScale(float x, float y, float z);

    void UpdateTransform();

	const float *GetTransform();
    const Mesh *GetMesh();

private:
    Mesh *m_pMesh;

    glm::vec3 m_pos;
    glm::vec3 m_rot;
    glm::vec3 m_scale;
    glm::mat4 m_transform;
};

#endif