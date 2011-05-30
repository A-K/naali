// For conditions of distribution and use, see copyright notice in license.txt

#pragma once

#include "CoreDefines.h"
#include "PhysicsModuleApi.h"
#include "Vector3D.h"

class btConvexHullShape;
class btTriangleMesh;

namespace Ogre
{
    class Mesh;
};

namespace Physics
{
    struct ConvexHullSet;

    void GenerateTriangleMesh(Ogre::Mesh* mesh, btTriangleMesh* ptr);
    void GetTrianglesFromMesh(Ogre::Mesh* mesh, std::vector<Vector3df>& dest);
    void GenerateConvexHullSet(Ogre::Mesh* mesh, ConvexHullSet* ptr);
}


