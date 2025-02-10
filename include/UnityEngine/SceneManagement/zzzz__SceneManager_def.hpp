#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/SceneManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneManager)
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityAction_2;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
class SceneManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SceneManagement::SceneManager);
// Dependencies System.Object
namespace UnityEngine::SceneManagement {
// Is value type: false
// CS Name: UnityEngine.SceneManagement.SceneManager
class CORDL_TYPE SceneManager : public ::System::Object {
public:
// Declarations
/// @brief Field activeSceneChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activeSceneChanged, put=setStaticF_activeSceneChanged)) ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>*  activeSceneChanged;

/// @brief Field s_AllowLoadScene, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_AllowLoadScene, put=setStaticF_s_AllowLoadScene)) bool  s_AllowLoadScene;

/// @brief Field sceneLoaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sceneLoaded, put=setStaticF_sceneLoaded)) ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  sceneLoaded;

/// @brief Field sceneUnloaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sceneUnloaded, put=setStaticF_sceneUnloaded)) ::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*  sceneUnloaded;

/// @brief Method GetActiveScene, addr 0x2f9a088, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::SceneManagement::Scene GetActiveScene() ;

/// @brief Method GetActiveScene_Injected, addr 0x2f9a104, size 0x3c, virtual false, abstract: false, final false
static inline void GetActiveScene_Injected(::ByRef<::UnityEngine::SceneManagement::Scene>  ret) ;

/// @brief Method GetSceneAt, addr 0x2f9a2c8, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::SceneManagement::Scene GetSceneAt(int32_t  index) ;

/// @brief Method GetSceneAt_Injected, addr 0x2f9a354, size 0x44, virtual false, abstract: false, final false
static inline void GetSceneAt_Injected(int32_t  index, ::ByRef<::UnityEngine::SceneManagement::Scene>  ret) ;

/// @brief Method GetSceneByName, addr 0x2f9a1f8, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::SceneManagement::Scene GetSceneByName(::StringW  name) ;

/// @brief Method GetSceneByName_Injected, addr 0x2f9a284, size 0x44, virtual false, abstract: false, final false
static inline void GetSceneByName_Injected(::StringW  name, ::ByRef<::UnityEngine::SceneManagement::Scene>  ret) ;

/// @brief Method Internal_ActiveSceneChanged, addr 0x2f9ab04, size 0xb0, virtual false, abstract: false, final false
static inline void Internal_ActiveSceneChanged(::UnityEngine::SceneManagement::Scene  previousActiveScene, ::UnityEngine::SceneManagement::Scene  newActiveScene) ;

/// @brief Method Internal_SceneLoaded, addr 0x2f9a9b8, size 0xb0, virtual false, abstract: false, final false
static inline void Internal_SceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

/// @brief Method Internal_SceneUnloaded, addr 0x2f9aa68, size 0x9c, virtual false, abstract: false, final false
static inline void Internal_SceneUnloaded(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method LoadFirstScene_Internal, addr 0x2f9a540, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* LoadFirstScene_Internal(bool  async) ;

/// @brief Method LoadScene, addr 0x2f9a7fc, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::SceneManagement::Scene LoadScene(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters) ;

/// @brief Method LoadScene, addr 0x2f9a790, size 0x64, virtual false, abstract: false, final false
static inline void LoadScene(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

/// @brief Method LoadSceneAsync, addr 0x2f9a89c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW  sceneName) ;

/// @brief Method LoadSceneAsync, addr 0x2f9a8f4, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters) ;

/// @brief Method LoadSceneAsyncNameIndexInternal, addr 0x2f9a464, size 0xdc, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::StringW  sceneName, int32_t  sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters, bool  mustCompleteNextFrame) ;

/// @brief Method SetActiveScene, addr 0x2f9a140, size 0x7c, virtual false, abstract: false, final false
static inline bool SetActiveScene(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method SetActiveScene_Injected, addr 0x2f9a1bc, size 0x3c, virtual false, abstract: false, final false
static inline bool SetActiveScene_Injected(::ByRef<::UnityEngine::SceneManagement::Scene>  scene) ;

/// @brief Method UnloadSceneAsync, addr 0x2f9a960, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method UnloadSceneAsyncInternal, addr 0x2f9a398, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* UnloadSceneAsyncInternal(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::UnloadSceneOptions  options) ;

/// @brief Method UnloadSceneAsyncInternal_Injected, addr 0x2f9a420, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* UnloadSceneAsyncInternal_Injected(::ByRef<::UnityEngine::SceneManagement::Scene>  scene, ::UnityEngine::SceneManagement::UnloadSceneOptions  options) ;

/// @brief Method add_sceneLoaded, addr 0x2f9a5a8, size 0xf4, virtual false, abstract: false, final false
static inline void add_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  value) ;

static inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>* getStaticF_activeSceneChanged() ;

static inline bool getStaticF_s_AllowLoadScene() ;

static inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>* getStaticF_sceneLoaded() ;

static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* getStaticF_sceneUnloaded() ;

/// @brief Method get_sceneCount, addr 0x2f9a060, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_sceneCount() ;

/// @brief Method remove_sceneLoaded, addr 0x2f9a69c, size 0xf4, virtual false, abstract: false, final false
static inline void remove_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  value) ;

static inline void setStaticF_activeSceneChanged(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>*  value) ;

static inline void setStaticF_s_AllowLoadScene(bool  value) ;

static inline void setStaticF_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  value) ;

static inline void setStaticF_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneManager(SceneManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneManager(SceneManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8697};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SceneManagement::SceneManager, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::SceneManagement
NEED_NO_BOX(::UnityEngine::SceneManagement::SceneManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::SceneManager*, "UnityEngine.SceneManagement", "SceneManager");
