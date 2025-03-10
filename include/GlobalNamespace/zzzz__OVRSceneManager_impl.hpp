#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePrefabOverride_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_Classification.get_List
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (*)()>(&::GlobalNamespace::OVRSceneManager_Classification::get_List)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2914ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_Classification*>::get(),
                        "get_List",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneManager_Classification::setStaticF__List_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "<List>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_Classification*>::get>(std::forward<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::OVRSceneManager_Classification::getStaticF__List_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "<List>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_Classification*>::get>();
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::OVRSceneManager_Classification::get_List()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_Classification*>::get(),
                        "get_List",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager_Classification::OVRSceneManager_Classification()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager_RoomLayoutInformation::*)()>(&::GlobalNamespace::OVRSceneManager_RoomLayoutInformation::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2913e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_get_Floor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Floor;
}
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_get_Floor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Floor;
}
constexpr void GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_set_Floor(::UnityW<::GlobalNamespace::OVRScenePlane>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Floor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_get_Ceiling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ceiling;
}
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_get_Ceiling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ceiling;
}
constexpr void GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_set_Ceiling(::UnityW<::GlobalNamespace::OVRScenePlane>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Ceiling)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*& GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_get_Walls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Walls;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* const& GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_get_Walls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Walls;
}
constexpr void GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_set_Walls(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Walls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRSceneManager_RoomLayoutInformation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* GlobalNamespace::OVRSceneManager_RoomLayoutInformation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation::OVRSceneManager_RoomLayoutInformation()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_LogForwarder.Log
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager_LogForwarder::*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRSceneManager_LogForwarder::Log)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2911ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_LogForwarder>::get(),
                        "Log",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_LogForwarder.LogWarning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager_LogForwarder::*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRSceneManager_LogForwarder::LogWarning)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x29114cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_LogForwarder>::get(),
                        "LogWarning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_LogForwarder.LogError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager_LogForwarder::*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRSceneManager_LogForwarder::LogError)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x291055c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_LogForwarder>::get(),
                        "LogError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneManager_LogForwarder::Log(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_LogForwarder>::get(),
                        "Log",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, message, gameObject);
}
inline void GlobalNamespace::OVRSceneManager_LogForwarder::LogWarning(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_LogForwarder>::get(),
                        "LogWarning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, message, gameObject);
}
inline void GlobalNamespace::OVRSceneManager_LogForwarder::LogError(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_LogForwarder>::get(),
                        "LogError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, message, gameObject);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager_LogForwarder::OVRSceneManager_LogForwarder()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_Development.Log
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRSceneManager_Development::Log)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2914e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_Development*>::get(),
                        "Log",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_Development.LogWarning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRSceneManager_Development::LogWarning)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2914ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_Development*>::get(),
                        "LogWarning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_Development.LogError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRSceneManager_Development::LogError)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2914f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_Development*>::get(),
                        "LogError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneManager_Development::Log(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_Development*>::get(),
                        "Log",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, message, gameObject);
}
inline void GlobalNamespace::OVRSceneManager_Development::LogWarning(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_Development*>::get(),
                        "LogWarning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, message, gameObject);
}
inline void GlobalNamespace::OVRSceneManager_Development::LogError(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager_Development*>::get(),
                        "LogError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, message, gameObject);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager_Development::OVRSceneManager_Development()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0::*)()>(&::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2912ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0._DoesRoomSetupExist_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0::*)(bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0::_DoesRoomSetupExist_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2915048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0*>::get(),
                        "<DoesRoomSetupExist>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& GlobalNamespace::OVRSceneManager___c__DisplayClass48_0::__cordl_internal_get_requestedAnchorClassifications()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestedAnchorClassifications;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& GlobalNamespace::OVRSceneManager___c__DisplayClass48_0::__cordl_internal_get_requestedAnchorClassifications() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestedAnchorClassifications;
}
constexpr void GlobalNamespace::OVRSceneManager___c__DisplayClass48_0::__cordl_internal_set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestedAnchorClassifications)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRTask_1<bool>& GlobalNamespace::OVRSceneManager___c__DisplayClass48_0::__cordl_internal_get_task()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr ::GlobalNamespace::OVRTask_1<bool> const& GlobalNamespace::OVRSceneManager___c__DisplayClass48_0::__cordl_internal_get_task() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr void GlobalNamespace::OVRSceneManager___c__DisplayClass48_0::__cordl_internal_set_task(::GlobalNamespace::OVRTask_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___task = value;
}
inline void GlobalNamespace::OVRSceneManager___c__DisplayClass48_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager___c__DisplayClass48_0::_DoesRoomSetupExist_b__0(bool  result, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0*>::get(),
                        "<DoesRoomSetupExist>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, anchors);
}
inline ::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0* GlobalNamespace::OVRSceneManager___c__DisplayClass48_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0::OVRSceneManager___c__DisplayClass48_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::*)()>(&::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2913090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0._CheckClassificationsInRooms_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::*)(bool)>(&::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::_CheckClassificationsInRooms_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2915060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0*>::get(),
                        "<CheckClassificationsInRooms>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::__cordl_internal_get_requestedAnchorClassifications()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestedAnchorClassifications;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::__cordl_internal_get_requestedAnchorClassifications() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestedAnchorClassifications;
}
constexpr void GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::__cordl_internal_set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestedAnchorClassifications)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRTask_1<bool>& GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::__cordl_internal_get_task()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr ::GlobalNamespace::OVRTask_1<bool> const& GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::__cordl_internal_get_task() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr void GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::__cordl_internal_set_task(::GlobalNamespace::OVRTask_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___task = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::__cordl_internal_get_roomAnchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomAnchors;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* const& GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::__cordl_internal_get_roomAnchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomAnchors;
}
constexpr void GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::__cordl_internal_set_roomAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomAnchors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::_CheckClassificationsInRooms_b__0(bool  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0*>::get(),
                        "<CheckClassificationsInRooms>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0* GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0::OVRSceneManager___c__DisplayClass51_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35::*)()>(&::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0x2915074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29156bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "isPaused", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSceneManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_anchors_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35::OVRSceneManager__OnApplicationPause_d__35(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, bool  isPaused, ::UnityW<::GlobalNamespace::OVRSceneManager>  __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _anchors_5__2, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap2, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->isPaused = isPaused;
this->__4__this = __4__this;
this->_anchors_5__2 = _anchors_5__2;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35::OVRSceneManager__OnApplicationPause_d__35()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36::*)()>(&::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36::MoveNext)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x29156c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2915d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36::OVRSceneManager__QueryForExistingAnchorsTransform_d__36(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap1, ::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid>  __7__wrap2, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__7__wrap1 = __7__wrap1;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36::OVRSceneManager__QueryForExistingAnchorsTransform_d__36()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.get_InitialAnchorParent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::get_InitialAnchorParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29102d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "get_InitialAnchorParent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.set_InitialAnchorParent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRSceneManager::set_InitialAnchorParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29102e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "set_InitialAnchorParent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.get_Verbose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::GlobalNamespace::OVRSceneManager_LogForwarder> (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::get_Verbose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x29102e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "get_Verbose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::Awake)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2910350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnApplicationPause
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(bool)>(&::GlobalNamespace::OVRSceneManager::OnApplicationPause)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2910618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnApplicationPause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.QueryForExistingAnchorsTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::QueryForExistingAnchorsTransform)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x29106c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "QueryForExistingAnchorsTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.LoadSceneModel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::LoadSceneModel)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2910748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "LoadSceneModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnAnchorsFetchCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRSceneManager::OnAnchorsFetchCompleted)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2910a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnAnchorsFetchCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.InstantiateActiveRooms
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRSceneManager::InstantiateActiveRooms)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x2910be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "InstantiateActiveRooms",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnFloorAnchorsFetchCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(bool)>(&::GlobalNamespace::OVRSceneManager::OnFloorAnchorsFetchCompleted)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x2911588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnFloorAnchorsFetchCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnFloorAnchorLocalizationCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(bool, ::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRSceneManager::OnFloorAnchorLocalizationCompleted)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2911d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnFloorAnchorLocalizationCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.LocateUserInRoom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRSceneManager::LocateUserInRoom)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x29118dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "LocateUserInRoom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.InstantiateSceneRooms
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRSceneManager::InstantiateSceneRooms)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x29110a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "InstantiateSceneRooms",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnSceneRoomLoadCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::OnSceneRoomLoadCompleted)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x29120c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnSceneRoomLoadCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.DestroyExistingAnchors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::DestroyExistingAnchors)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2910880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "DestroyExistingAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.RequestSceneCapture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x29122d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "RequestSceneCapture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.RequestSceneCapture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x29123b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "RequestSceneCapture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.DoesRoomSetupExist
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSceneManager::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::GlobalNamespace::OVRSceneManager::DoesRoomSetupExist)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x291284c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "DoesRoomSetupExist",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CheckIfClassificationsAreValid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::GlobalNamespace::OVRSceneManager::CheckIfClassificationsAreValid)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x2912444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "CheckIfClassificationsAreValid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.GetUuidsToQuery
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRAnchor, ::System::Collections::Generic::HashSet_1<::System::Guid>*)>(&::GlobalNamespace::OVRSceneManager::GetUuidsToQuery)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2912ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "GetUuidsToQuery",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::Guid>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CheckClassificationsInRooms
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::GlobalNamespace::OVRTask_1<bool>)>(&::GlobalNamespace::OVRSceneManager::CheckClassificationsInRooms)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x2912bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "CheckClassificationsInRooms",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<bool>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CheckIfAnchorsContainClassifications
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::GlobalNamespace::OVRTask_1<bool>)>(&::GlobalNamespace::OVRSceneManager::CheckIfAnchorsContainClassifications)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x2913098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "CheckIfAnchorsContainClassifications",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<bool>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CollectLabelsFromAnchors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::OVRSceneManager::CollectLabelsFromAnchors)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x291356c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "CollectLabelsFromAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnTrackingSpaceChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRSceneManager::OnTrackingSpaceChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29136ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnTrackingSpaceChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2913930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.UpdateAllSceneAnchors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRSceneManager::UpdateAllSceneAnchors)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x29136f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "UpdateAllSceneAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.UpdateSomeSceneAnchors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::UpdateSomeSceneAnchors)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2913934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "UpdateSomeSceneAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.GetRoomLayoutInformation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::GetRoomLayoutInformation)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x291218c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "GetRoomLayoutInformation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.RequestSceneCapture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)(::StringW)>(&::GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2912318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "RequestSceneCapture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::OnEnable)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2913e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::OnDisable)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2914104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.PointInPolygon2D
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>, ::UnityEngine::Vector2)>(&::GlobalNamespace::OVRSceneManager::PointInPolygon2D)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2911e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "PointInPolygon2D",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OVRManager_SceneCaptureComplete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(uint64_t, bool)>(&::GlobalNamespace::OVRSceneManager::OVRManager_SceneCaptureComplete)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x291432c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OVRManager_SceneCaptureComplete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.InstantiateSceneAnchor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::OVRSceneAnchor> (::GlobalNamespace::OVRSceneManager::*)(::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRSceneAnchor*)>(&::GlobalNamespace::OVRSceneManager::InstantiateSceneAnchor)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x2914444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "InstantiateSceneAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSceneAnchor*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x29149a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& GlobalNamespace::OVRSceneManager::__cordl_internal_get_PlanePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlanePrefab;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_PlanePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlanePrefab;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_PlanePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PlanePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& GlobalNamespace::OVRSceneManager::__cordl_internal_get_VolumePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumePrefab;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_VolumePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumePrefab;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_VolumePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___VolumePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_PrefabOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrefabOverrides;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_PrefabOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrefabOverrides;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_PrefabOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PrefabOverrides)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRSceneManager::__cordl_internal_get_ActiveRoomsOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveRoomsOnly;
}
constexpr bool const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_ActiveRoomsOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveRoomsOnly;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_ActiveRoomsOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveRoomsOnly = value;
}
constexpr bool& GlobalNamespace::OVRSceneManager::__cordl_internal_get_VerboseLogging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerboseLogging;
}
constexpr bool const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_VerboseLogging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerboseLogging;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_VerboseLogging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VerboseLogging = value;
}
constexpr int32_t& GlobalNamespace::OVRSceneManager::__cordl_internal_get_MaxSceneAnchorUpdatesPerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxSceneAnchorUpdatesPerFrame;
}
constexpr int32_t const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_MaxSceneAnchorUpdatesPerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxSceneAnchorUpdatesPerFrame;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_MaxSceneAnchorUpdatesPerFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxSceneAnchorUpdatesPerFrame = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRSceneManager::__cordl_internal_get__initialAnchorParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialAnchorParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__initialAnchorParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialAnchorParent;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__initialAnchorParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initialAnchorParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_SceneModelLoadedSuccessfully()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneModelLoadedSuccessfully;
}
constexpr ::System::Action* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_SceneModelLoadedSuccessfully() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneModelLoadedSuccessfully;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_SceneModelLoadedSuccessfully(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SceneModelLoadedSuccessfully)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_NoSceneModelToLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoSceneModelToLoad;
}
constexpr ::System::Action* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_NoSceneModelToLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoSceneModelToLoad;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_NoSceneModelToLoad(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NoSceneModelToLoad)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_SceneCaptureReturnedWithoutError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneCaptureReturnedWithoutError;
}
constexpr ::System::Action* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_SceneCaptureReturnedWithoutError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneCaptureReturnedWithoutError;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_SceneCaptureReturnedWithoutError(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SceneCaptureReturnedWithoutError)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_UnexpectedErrorWithSceneCapture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnexpectedErrorWithSceneCapture;
}
constexpr ::System::Action* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_UnexpectedErrorWithSceneCapture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnexpectedErrorWithSceneCapture;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_UnexpectedErrorWithSceneCapture(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UnexpectedErrorWithSceneCapture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_NewSceneModelAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewSceneModelAvailable;
}
constexpr ::System::Action* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_NewSceneModelAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewSceneModelAvailable;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_NewSceneModelAvailable(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NewSceneModelAvailable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_RoomLayout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomLayout;
}
constexpr ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_RoomLayout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomLayout;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_RoomLayout(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RoomLayout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint64_t& GlobalNamespace::OVRSceneManager::__cordl_internal_get__sceneCaptureRequestId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneCaptureRequestId;
}
constexpr uint64_t const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__sceneCaptureRequestId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneCaptureRequestId;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__sceneCaptureRequestId(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneCaptureRequestId = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& GlobalNamespace::OVRSceneManager::__cordl_internal_get__cameraRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__cameraRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRig;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cameraRig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::OVRSceneManager::__cordl_internal_get__sceneAnchorUpdateIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneAnchorUpdateIndex;
}
constexpr int32_t const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__sceneAnchorUpdateIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneAnchorUpdateIndex;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__sceneAnchorUpdateIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneAnchorUpdateIndex = value;
}
constexpr int32_t& GlobalNamespace::OVRSceneManager::__cordl_internal_get__roomCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomCounter;
}
constexpr int32_t const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__roomCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomCounter;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__roomCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomCounter = value;
}
constexpr ::System::Action_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*& GlobalNamespace::OVRSceneManager::__cordl_internal_get__onAnchorsFetchCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAnchorsFetchCompleted;
}
constexpr ::System::Action_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__onAnchorsFetchCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAnchorsFetchCompleted;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__onAnchorsFetchCompleted(::System::Action_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onAnchorsFetchCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRSceneManager::__cordl_internal_get__hasLoadedScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasLoadedScene;
}
constexpr bool const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__hasLoadedScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasLoadedScene;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__hasLoadedScene(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasLoadedScene = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::OVRSceneManager::__cordl_internal_get__onFloorAnchorsFetchCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onFloorAnchorsFetchCompleted;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__onFloorAnchorsFetchCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onFloorAnchorsFetchCompleted;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__onFloorAnchorsFetchCompleted(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onFloorAnchorsFetchCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<bool,::GlobalNamespace::OVRAnchor>*& GlobalNamespace::OVRSceneManager::__cordl_internal_get__onFloorAnchorLocalizationCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onFloorAnchorLocalizationCompleted;
}
constexpr ::System::Action_2<bool,::GlobalNamespace::OVRAnchor>* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__onFloorAnchorLocalizationCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onFloorAnchorLocalizationCompleted;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__onFloorAnchorLocalizationCompleted(::System::Action_2<bool,::GlobalNamespace::OVRAnchor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onFloorAnchorLocalizationCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& GlobalNamespace::OVRSceneManager::__cordl_internal_get__floorAnchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floorAnchors;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__floorAnchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floorAnchors;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__floorAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floorAnchors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>*& GlobalNamespace::OVRSceneManager::__cordl_internal_get__pendingLocatable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingLocatable;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__pendingLocatable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingLocatable;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__pendingLocatable(::System::Collections::Generic::HashSet_1<::System::Guid>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pendingLocatable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRAnchor>*& GlobalNamespace::OVRSceneManager::__cordl_internal_get__roomAndFloorPairs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomAndFloorPairs;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRAnchor>* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__roomAndFloorPairs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomAndFloorPairs;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__roomAndFloorPairs(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRAnchor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____roomAndFloorPairs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& GlobalNamespace::OVRSceneManager::__cordl_internal_get__roomLayoutAnchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomLayoutAnchors;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__roomLayoutAnchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomLayoutAnchors;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__roomLayoutAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____roomLayoutAnchors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::OVRSceneManager::get_InitialAnchorParent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "get_InitialAnchorParent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::set_InitialAnchorParent(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "set_InitialAnchorParent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::GlobalNamespace::OVRSceneManager_LogForwarder> GlobalNamespace::OVRSceneManager::get_Verbose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "get_Verbose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::OVRSceneManager_LogForwarder>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OnApplicationPause(bool  isPaused)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnApplicationPause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isPaused);
}
inline void GlobalNamespace::OVRSceneManager::QueryForExistingAnchorsTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "QueryForExistingAnchorsTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::LoadSceneModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "LoadSceneModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OnAnchorsFetchCompleted(bool  success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  roomLayoutAnchors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnAnchorsFetchCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success, roomLayoutAnchors);
}
inline void GlobalNamespace::OVRSceneManager::InstantiateActiveRooms(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  roomLayoutAnchors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "InstantiateActiveRooms",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomLayoutAnchors);
}
inline void GlobalNamespace::OVRSceneManager::OnFloorAnchorsFetchCompleted(bool  success)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnFloorAnchorsFetchCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success);
}
inline void GlobalNamespace::OVRSceneManager::OnFloorAnchorLocalizationCompleted(bool  success, ::GlobalNamespace::OVRAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnFloorAnchorLocalizationCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success, anchor);
}
inline void GlobalNamespace::OVRSceneManager::LocateUserInRoom(::GlobalNamespace::OVRAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "LocateUserInRoom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchor);
}
inline void GlobalNamespace::OVRSceneManager::InstantiateSceneRooms(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  roomLayoutAnchors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "InstantiateSceneRooms",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomLayoutAnchors);
}
inline void GlobalNamespace::OVRSceneManager::OnSceneRoomLoadCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnSceneRoomLoadCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::DestroyExistingAnchors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "DestroyExistingAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::RequestSceneCapture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "RequestSceneCapture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::RequestSceneCapture(::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "RequestSceneCapture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, requestedAnchorClassifications);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSceneManager::DoesRoomSetupExist(::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "DoesRoomSetupExist",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(this, ___internal_method, requestedAnchorClassifications);
}
inline void GlobalNamespace::OVRSceneManager::CheckIfClassificationsAreValid(::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "CheckIfClassificationsAreValid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestedAnchorClassifications);
}
inline void GlobalNamespace::OVRSceneManager::GetUuidsToQuery(::GlobalNamespace::OVRAnchor  anchor, ::System::Collections::Generic::HashSet_1<::System::Guid>*  uuidsToQuery)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "GetUuidsToQuery",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::Guid>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, anchor, uuidsToQuery);
}
inline void GlobalNamespace::OVRSceneManager::CheckClassificationsInRooms(bool  success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms, ::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool>  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "CheckClassificationsInRooms",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<bool>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, success, rooms, requestedAnchorClassifications, task);
}
inline void GlobalNamespace::OVRSceneManager::CheckIfAnchorsContainClassifications(bool  success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  roomAnchors, ::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool>  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "CheckIfAnchorsContainClassifications",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<bool>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, success, roomAnchors, requestedAnchorClassifications, task);
}
inline void GlobalNamespace::OVRSceneManager::CollectLabelsFromAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::List_1<::StringW>*  labels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "CollectLabelsFromAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, anchors, labels);
}
inline void GlobalNamespace::OVRSceneManager::OnTrackingSpaceChanged(::UnityEngine::Transform*  trackingSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnTrackingSpaceChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trackingSpace);
}
inline void GlobalNamespace::OVRSceneManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::UpdateAllSceneAnchors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "UpdateAllSceneAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::UpdateSomeSceneAnchors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "UpdateSomeSceneAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* GlobalNamespace::OVRSceneManager::GetRoomLayoutInformation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "GetRoomLayoutInformation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::RequestSceneCapture(::StringW  requestString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "RequestSceneCapture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, requestString);
}
inline void GlobalNamespace::OVRSceneManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::PointInPolygon2D(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  boundaryVertices, ::UnityEngine::Vector2  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "PointInPolygon2D",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boundaryVertices, target);
}
inline void GlobalNamespace::OVRSceneManager::OVRManager_SceneCaptureComplete(uint64_t  requestId, bool  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "OVRManager_SceneCaptureComplete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestId, result);
}
inline ::UnityW<::GlobalNamespace::OVRSceneAnchor> GlobalNamespace::OVRSceneManager::InstantiateSceneAnchor(::GlobalNamespace::OVRAnchor  anchor, ::GlobalNamespace::OVRSceneAnchor*  prefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        "InstantiateSceneAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSceneAnchor*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRSceneAnchor>, false>(this, ___internal_method, anchor, prefab);
}
inline void GlobalNamespace::OVRSceneManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneManager* GlobalNamespace::OVRSceneManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSceneManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager::OVRSceneManager()   {
}
