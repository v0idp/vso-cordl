#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/SceneManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__SceneManager_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_2_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.get_sceneCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::SceneManagement::SceneManager::get_sceneCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f9a060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "get_sceneCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.GetActiveScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::Scene (*)()>(&::UnityEngine::SceneManagement::SceneManager::GetActiveScene)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f9a088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "GetActiveScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.SetActiveScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::SceneManagement::SceneManager::SetActiveScene)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f9a140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "SetActiveScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.GetSceneByName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::Scene (*)(::StringW)>(&::UnityEngine::SceneManagement::SceneManager::GetSceneByName)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2f9a1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "GetSceneByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.GetSceneAt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::Scene (*)(int32_t)>(&::UnityEngine::SceneManagement::SceneManager::GetSceneAt)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2f9a2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "GetSceneAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.UnloadSceneAsyncInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::UnloadSceneOptions)>(&::UnityEngine::SceneManagement::SceneManager::UnloadSceneAsyncInternal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2f9a398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "UnloadSceneAsyncInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.LoadSceneAsyncNameIndexInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (*)(::StringW, int32_t, ::UnityEngine::SceneManagement::LoadSceneParameters, bool)>(&::UnityEngine::SceneManagement::SceneManager::LoadSceneAsyncNameIndexInternal)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2f9a464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "LoadSceneAsyncNameIndexInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.LoadFirstScene_Internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (*)(bool)>(&::UnityEngine::SceneManagement::SceneManager::LoadFirstScene_Internal)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f9a540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "LoadFirstScene_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.add_sceneLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*)>(&::UnityEngine::SceneManagement::SceneManager::add_sceneLoaded)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2f9a5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "add_sceneLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.remove_sceneLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*)>(&::UnityEngine::SceneManagement::SceneManager::remove_sceneLoaded)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2f9a69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "remove_sceneLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.LoadScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::UnityEngine::SceneManagement::SceneManager::LoadScene)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f9a790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.LoadScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::Scene (*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneParameters)>(&::UnityEngine::SceneManagement::SceneManager::LoadScene)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2f9a7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (*)(::StringW)>(&::UnityEngine::SceneManagement::SceneManager::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f9a89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneParameters)>(&::UnityEngine::SceneManagement::SceneManager::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f9a8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.UnloadSceneAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::SceneManagement::SceneManager::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f9a960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "UnloadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.Internal_SceneLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::UnityEngine::SceneManagement::SceneManager::Internal_SceneLoaded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2f9a9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "Internal_SceneLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.Internal_SceneUnloaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::SceneManagement::SceneManager::Internal_SceneUnloaded)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f9aa68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "Internal_SceneUnloaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.Internal_ActiveSceneChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::SceneManagement::SceneManager::Internal_ActiveSceneChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2f9ab04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "Internal_ActiveSceneChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.GetActiveScene_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::SceneManagement::Scene>)>(&::UnityEngine::SceneManagement::SceneManager::GetActiveScene_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f9a104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "GetActiveScene_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::SceneManagement::Scene>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.SetActiveScene_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::UnityEngine::SceneManagement::Scene>)>(&::UnityEngine::SceneManagement::SceneManager::SetActiveScene_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f9a1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "SetActiveScene_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::SceneManagement::Scene>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.GetSceneByName_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ByRef<::UnityEngine::SceneManagement::Scene>)>(&::UnityEngine::SceneManagement::SceneManager::GetSceneByName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f9a284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "GetSceneByName_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::SceneManagement::Scene>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.GetSceneAt_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::ByRef<::UnityEngine::SceneManagement::Scene>)>(&::UnityEngine::SceneManagement::SceneManager::GetSceneAt_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f9a354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "GetSceneAt_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::SceneManagement::Scene>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.UnloadSceneAsyncInternal_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (*)(::ByRef<::UnityEngine::SceneManagement::Scene>, ::UnityEngine::SceneManagement::UnloadSceneOptions)>(&::UnityEngine::SceneManagement::SceneManager::UnloadSceneAsyncInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f9a420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "UnloadSceneAsyncInternal_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::SceneManagement::Scene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::SceneManagement::SceneManager::setStaticF_s_AllowLoadScene(bool  value)  {
::cordl_internals::setStaticField<bool, "s_AllowLoadScene", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::SceneManagement::SceneManager::getStaticF_s_AllowLoadScene()  {
return ::cordl_internals::getStaticField<bool, "s_AllowLoadScene", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get>();
}
inline void UnityEngine::SceneManagement::SceneManager::setStaticF_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*, "sceneLoaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get>(std::forward<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*>(value));
}
inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>* UnityEngine::SceneManagement::SceneManager::getStaticF_sceneLoaded()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*, "sceneLoaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get>();
}
inline void UnityEngine::SceneManagement::SceneManager::setStaticF_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*, "sceneUnloaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get>(std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* UnityEngine::SceneManagement::SceneManager::getStaticF_sceneUnloaded()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*, "sceneUnloaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get>();
}
inline void UnityEngine::SceneManagement::SceneManager::setStaticF_activeSceneChanged(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>*, "activeSceneChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get>(std::forward<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>*>(value));
}
inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>* UnityEngine::SceneManagement::SceneManager::getStaticF_activeSceneChanged()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>*, "activeSceneChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get>();
}
inline int32_t UnityEngine::SceneManagement::SceneManager::get_sceneCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "get_sceneCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManager::GetActiveScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "GetActiveScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::SceneManagement::SceneManager::SetActiveScene(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "SetActiveScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, scene);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManager::GetSceneByName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "GetSceneByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene, false>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManager::GetSceneAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "GetSceneAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene, false>(nullptr, ___internal_method, index);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::UnloadSceneAsyncInternal(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::UnloadSceneOptions  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "UnloadSceneAsyncInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(nullptr, ___internal_method, scene, options);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadSceneAsyncNameIndexInternal(::StringW  sceneName, int32_t  sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters, bool  mustCompleteNextFrame)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "LoadSceneAsyncNameIndexInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(nullptr, ___internal_method, sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadFirstScene_Internal(bool  async)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "LoadFirstScene_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(nullptr, ___internal_method, async);
}
inline void UnityEngine::SceneManagement::SceneManager::add_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "add_sceneLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::SceneManagement::SceneManager::remove_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "remove_sceneLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::SceneManagement::SceneManager::LoadScene(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneMode  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sceneName, mode);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManager::LoadScene(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene, false>(nullptr, ___internal_method, sceneName, parameters);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadSceneAsync(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(nullptr, ___internal_method, sceneName);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadSceneAsync(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(nullptr, ___internal_method, sceneName, parameters);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::UnloadSceneAsync(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "UnloadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(nullptr, ___internal_method, scene);
}
inline void UnityEngine::SceneManagement::SceneManager::Internal_SceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "Internal_SceneLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, scene, mode);
}
inline void UnityEngine::SceneManagement::SceneManager::Internal_SceneUnloaded(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "Internal_SceneUnloaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, scene);
}
inline void UnityEngine::SceneManagement::SceneManager::Internal_ActiveSceneChanged(::UnityEngine::SceneManagement::Scene  previousActiveScene, ::UnityEngine::SceneManagement::Scene  newActiveScene)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "Internal_ActiveSceneChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, previousActiveScene, newActiveScene);
}
inline void UnityEngine::SceneManagement::SceneManager::GetActiveScene_Injected(::ByRef<::UnityEngine::SceneManagement::Scene>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "GetActiveScene_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::SceneManagement::Scene>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ret);
}
inline bool UnityEngine::SceneManagement::SceneManager::SetActiveScene_Injected(::ByRef<::UnityEngine::SceneManagement::Scene>  scene)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "SetActiveScene_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::SceneManagement::Scene>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, scene);
}
inline void UnityEngine::SceneManagement::SceneManager::GetSceneByName_Injected(::StringW  name, ::ByRef<::UnityEngine::SceneManagement::Scene>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "GetSceneByName_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::SceneManagement::Scene>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, ret);
}
inline void UnityEngine::SceneManagement::SceneManager::GetSceneAt_Injected(int32_t  index, ::ByRef<::UnityEngine::SceneManagement::Scene>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "GetSceneAt_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::SceneManagement::Scene>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, index, ret);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::UnloadSceneAsyncInternal_Injected(::ByRef<::UnityEngine::SceneManagement::Scene>  scene, ::UnityEngine::SceneManagement::UnloadSceneOptions  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManager*>::get(),
                        "UnloadSceneAsyncInternal_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::SceneManagement::Scene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(nullptr, ___internal_method, scene, options);
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::SceneManager::SceneManager()   {
}
