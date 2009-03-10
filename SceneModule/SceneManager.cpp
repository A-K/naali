// For conditions of distribution and use, see copyright notice in license.txt

#include "StableHeaders.h"
#include "SceneManager.h"
#include "Entity.h"
#include "Foundation.h"

namespace Scene
{
    Foundation::EntityPtr SceneManager::CreateEntity(const Core::StringVector &components)
    {
        Foundation::EntityPtr entity = Foundation::EntityPtr(new Scene::Entity);
        for (size_t i=0 ; i<components.size() ; ++i)
        {
            entity->AddEntityComponent(framework_->GetComponentManager()->CreateComponent(components[i]));
        }

        entities_[entity->GetId()] = entity;

        return entity;
    }

    Foundation::EntityPtr SceneManager::CreateEntity()
    {
        Core::StringVector empty;
        return CreateEntity(empty);
    }
    
    Foundation::EntityPtr SceneManager::GetEntity(Core::entity_id_t id) const
    {
        EntityMap::const_iterator it = entities_.find(id);
        if (it != entities_.end())
            return it->second;

        const std::string e(std::string("Failed to find entity with id: " + boost::lexical_cast<std::string>(id)));
        throw Core::Exception(e.c_str());
    }
}

