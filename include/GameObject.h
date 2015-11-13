#ifndef _GAMEOBJECT_H
#define _GAMEOBJECT_H


#include "Common.h"
#include "Vertices.h"

//google camel case
class GameObject
{
public: 
	GameObject();
	~GameObject();

	void update();

	void createBuffer(Vertex *pVerts, int numVerts, int *pIndices, int numIndices);

	void loadShader(const string& vsFilename, const string& fsFilename);



private:
	GLuint m_VAO;
	GLuint m_VBO;
	GLuint m_EBO;
	GLuint m_ShaderProgram;

	mat4 m_ModelMatrix;
	vec3 m_Position;
	vec3 m_Rotation;
	vec3 m_Scale;

	vec4 m_AmbientMaterial;
	vec4 m_DiffuseMaterial;
	vec4 m_SpecularMaterial;
	float m_SpecularPower;
	int m_NoOfVertices;
	int m_NoOfIndices;

protected:
};

#endif