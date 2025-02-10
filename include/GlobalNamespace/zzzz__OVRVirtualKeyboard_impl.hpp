#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboard.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFScene_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "GlobalNamespace/zzzz__OVRManager_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPose_impl.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboard_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVRBone_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFLoader_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboard_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRPhysicsRaycaster_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition::OVRVirtualKeyboard_KeyboardPosition(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition::OVRVirtualKeyboard_KeyboardPosition()   {
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition  GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition::Far{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition  GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition::Near{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition  GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition::Direct{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition  GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition::Custom{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler.set_OnTextChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::set_OnTextChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler.get_OnTextChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::StringW>* (::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::get_OnTextChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler.get_Text
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::get_Text)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler.get_SubmitOnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::get_SubmitOnEnter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler.get_IsFocused
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::get_IsFocused)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler.Submit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::Submit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler.AppendText
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::*)(::StringW)>(&::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::AppendText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler.ApplyBackspace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::ApplyBackspace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler.MoveTextEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_ITextHandler::MoveTextEnd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRVirtualKeyboard_ITextHandler::set_OnTextChanged(::System::Action_1<::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Action_1<::StringW>* GlobalNamespace::OVRVirtualKeyboard_ITextHandler::get_OnTextChanged()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::StringW>*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRVirtualKeyboard_ITextHandler::get_Text()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRVirtualKeyboard_ITextHandler::get_SubmitOnEnter()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRVirtualKeyboard_ITextHandler::get_IsFocused()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_ITextHandler::Submit()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_ITextHandler::AppendText(::StringW  s)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void GlobalNamespace::OVRVirtualKeyboard_ITextHandler::ApplyBackspace()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_ITextHandler::MoveTextEnd()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler.get_OnTextChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::StringW>* (::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::get_OnTextChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler.set_OnTextChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::set_OnTextChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler.get_Text
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::get_Text)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler.get_SubmitOnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::get_SubmitOnEnter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler.get_IsFocused
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::get_IsFocused)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler.Submit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::Submit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler.AppendText
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::*)(::StringW)>(&::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::AppendText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler.ApplyBackspace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::ApplyBackspace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler.MoveTextEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::MoveTextEnd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x292ed78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Action_1<::StringW>* GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::get_OnTextChanged()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::StringW>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::set_OnTextChanged(::System::Action_1<::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::get_Text()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::get_SubmitOnEnter()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::get_IsFocused()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::Submit()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::AppendText(::StringW  s)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::ApplyBackspace()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::MoveTextEnd()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler* GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*>());
}
/// @brief Convert operator to "::GlobalNamespace::OVRVirtualKeyboard_ITextHandler"
constexpr  GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::operator ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*() noexcept {
return static_cast<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRVirtualKeyboard_ITextHandler"
constexpr ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::i___GlobalNamespace__OVRVirtualKeyboard_ITextHandler() noexcept {
return static_cast<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler::OVRVirtualKeyboard_AbstractTextHandler()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::*)(::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x292dbec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::Dispose)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x292ed80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope.get_OnTextChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::StringW>* (::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::get_OnTextChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x292eed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "get_OnTextChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope.set_OnTextChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::set_OnTextChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x292ef10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "set_OnTextChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope.get_Text
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::get_Text)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x292ef48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "get_Text",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope.get_SubmitOnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::get_SubmitOnEnter)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x292e464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "get_SubmitOnEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope.get_IsFocused
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::get_IsFocused)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x292efec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "get_IsFocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope.Submit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::Submit)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x292e508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "Submit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope.AppendText
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::*)(::StringW)>(&::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::AppendText)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x292dd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "AppendText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope.ApplyBackspace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::ApplyBackspace)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x292e0c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "ApplyBackspace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope.MoveTextEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::MoveTextEnd)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x292f090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "MoveTextEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*& GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::__cordl_internal_get__textHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textHandler;
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* const& GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::__cordl_internal_get__textHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textHandler;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::__cordl_internal_set__textHandler(::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::__cordl_internal_get__textChangeHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textChangeHandler;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::__cordl_internal_get__textChangeHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textChangeHandler;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::__cordl_internal_set__textChangeHandler(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textChangeHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::_ctor(::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*  textHandler, ::System::Action_1<::StringW>*  textChangeHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textHandler, textChangeHandler);
}
inline void GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Action_1<::StringW>* GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::get_OnTextChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "get_OnTextChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::StringW>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::set_OnTextChanged(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "set_OnTextChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::get_Text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "get_Text",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::get_SubmitOnEnter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "get_SubmitOnEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::get_IsFocused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "get_IsFocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::Submit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "Submit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::AppendText(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "AppendText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::ApplyBackspace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "ApplyBackspace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::MoveTextEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>::get(),
                        "MoveTextEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope* GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::New_ctor(::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*  textHandler, ::System::Action_1<::StringW>*  textChangeHandler)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*>(textHandler, textChangeHandler));
}
/// @brief Convert operator to "::GlobalNamespace::OVRVirtualKeyboard_ITextHandler"
constexpr  GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::operator ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*() noexcept {
return static_cast<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRVirtualKeyboard_ITextHandler"
constexpr ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::i___GlobalNamespace__OVRVirtualKeyboard_ITextHandler() noexcept {
return static_cast<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope::OVRVirtualKeyboard_TextHandlerScope()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible.get_keepWaiting
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible::get_keepWaiting)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x292f13c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible::*)(::GlobalNamespace::OVRVirtualKeyboard*)>(&::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x292f170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible::__cordl_internal_get__keyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboard;
}
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible::__cordl_internal_get__keyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboard;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible::__cordl_internal_set__keyboard(::UnityW<::GlobalNamespace::OVRVirtualKeyboard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyboard)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible::get_keepWaiting()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible::_ctor(::GlobalNamespace::OVRVirtualKeyboard*  keyboard)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboard);
}
inline ::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible* GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible::New_ctor(::GlobalNamespace::OVRVirtualKeyboard*  keyboard)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible*>(keyboard));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible::OVRVirtualKeyboard_WaitUntilKeyboardVisible()   {
}
// Ctor Parameters [CppParam { name: "root", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "originalPose", ty: "::GlobalNamespace::OVRPose", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetPose", ty: "::GlobalNamespace::OVRPose", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData(::UnityW<::UnityEngine::Transform>  root, ::GlobalNamespace::OVRPose  originalPose, ::GlobalNamespace::OVRPose  targetPose) noexcept  {
this->root = root;
this->originalPose = originalPose;
this->targetPose = targetPose;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData()   {
}
//  Writing Method size for method: ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::*)(int32_t)>(&::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x292f36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::*)()>(&::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x292f394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::*)()>(&::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x292f398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::*)()>(&::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x292f430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::*)()>(&::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x292f438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::*)()>(&::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x292f470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*& GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* const& GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::__cordl_internal_set___4__this(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6* GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride.Enqueue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::*)(::UnityEngine::Transform*, ::GlobalNamespace::OVRPlugin_Posef)>(&::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::Enqueue)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x292d454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*>::get(),
                        "Enqueue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Posef>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride.LateApply
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::*)(::UnityEngine::MonoBehaviour*)>(&::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::LateApply)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x292d234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*>::get(),
                        "LateApply",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MonoBehaviour*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x292f2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride.RevertInteractorOverrides
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::RevertInteractorOverrides)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x292f274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*>::get(),
                        "RevertInteractorOverrides",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride.ApplyOverride
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData)>(&::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::ApplyOverride)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x292f198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*>::get(),
                        "ApplyOverride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x292e7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>*& GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::__cordl_internal_get_applyQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* const& GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::__cordl_internal_get_applyQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyQueue;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::__cordl_internal_set_applyQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___applyQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>*& GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::__cordl_internal_get_revertQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___revertQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* const& GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::__cordl_internal_get_revertQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___revertQueue;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::__cordl_internal_set_revertQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___revertQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::Enqueue(::UnityEngine::Transform*  interactorRootTransform, ::GlobalNamespace::OVRPlugin_Posef  interactorRootPose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*>::get(),
                        "Enqueue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Posef>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactorRootTransform, interactorRootPose);
}
inline void GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::LateApply(::UnityEngine::MonoBehaviour*  coroutineRunner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*>::get(),
                        "LateApply",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MonoBehaviour*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, coroutineRunner);
}
inline void GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::RevertInteractorOverrides()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*>::get(),
                        "RevertInteractorOverrides",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::ApplyOverride(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData  interactorOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*>::get(),
                        "ApplyOverride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, interactorOverride);
}
inline void GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride::OVRVirtualKeyboard_InteractorRootTransformOverride()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource::OVRVirtualKeyboard_InputSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource::OVRVirtualKeyboard_InputSource()   {
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource  GlobalNamespace::OVRVirtualKeyboard_InputSource::ControllerLeft{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource  GlobalNamespace::OVRVirtualKeyboard_InputSource::ControllerRight{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource  GlobalNamespace::OVRVirtualKeyboard_InputSource::HandLeft{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource  GlobalNamespace::OVRVirtualKeyboard_InputSource::HandRight{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_IInputSource.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_IInputSource::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_IInputSource::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRVirtualKeyboard_IInputSource::Update()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::OVRVirtualKeyboard_IInputSource::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRVirtualKeyboard_IInputSource::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x292f478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource.OnUpdatedAnchors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::*)(::GlobalNamespace::OVRCameraRig*)>(&::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::OnUpdatedAnchors)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x292f568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource*>::get(),
                        "OnUpdatedAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRCameraRig*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::Update)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x292f5cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource.UpdateInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::UpdateInput)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::Dispose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x292f5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::__cordl_internal_get__operatingWithoutOVRCameraRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operatingWithoutOVRCameraRig;
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::__cordl_internal_get__operatingWithoutOVRCameraRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operatingWithoutOVRCameraRig;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::__cordl_internal_set__operatingWithoutOVRCameraRig(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____operatingWithoutOVRCameraRig = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::__cordl_internal_get__rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::__cordl_internal_get__rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rig;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::__cordl_internal_set__rig(::UnityW<::GlobalNamespace::OVRCameraRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
inline void GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::OnUpdatedAnchors(::GlobalNamespace::OVRCameraRig*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource*>::get(),
                        "OnUpdatedAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRCameraRig*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::UpdateInput()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource* GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource*>());
}
/// @brief Convert operator to "::GlobalNamespace::OVRVirtualKeyboard_IInputSource"
constexpr  GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::operator ::GlobalNamespace::OVRVirtualKeyboard_IInputSource*() noexcept {
return static_cast<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRVirtualKeyboard_IInputSource"
constexpr ::GlobalNamespace::OVRVirtualKeyboard_IInputSource* GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::i___GlobalNamespace__OVRVirtualKeyboard_IInputSource() noexcept {
return static_cast<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource::OVRVirtualKeyboard_BaseInputSource()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource.get_TriggerIsPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::get_TriggerIsPressed)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x292f6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource*>::get(),
                        "get_TriggerIsPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::*)(::GlobalNamespace::OVRVirtualKeyboard*, ::GlobalNamespace::OVRVirtualKeyboard_InputSource, ::GlobalNamespace::OVRInput_Controller, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x292d5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard_InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource.UpdateInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::UpdateInput)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x292f738;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_get__rootTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_get__rootTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootTransform;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_set__rootTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rootTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_get__directTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____directTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_get__directTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____directTransform;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_set__directTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource& GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_get__inputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSource;
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource const& GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_get__inputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSource;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_set__inputSource(::GlobalNamespace::OVRVirtualKeyboard_InputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputSource = value;
}
constexpr ::GlobalNamespace::OVRInput_Controller& GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_get__controllerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerType;
}
constexpr ::GlobalNamespace::OVRInput_Controller const& GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_get__controllerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerType;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_set__controllerType(::GlobalNamespace::OVRInput_Controller  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerType = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_get__keyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboard;
}
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_get__keyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboard;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_set__keyboard(::UnityW<::GlobalNamespace::OVRVirtualKeyboard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyboard)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_get__lastFrameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFrameCount;
}
constexpr int32_t const& GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_get__lastFrameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFrameCount;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::__cordl_internal_set__lastFrameCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastFrameCount = value;
}
inline bool GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::get_TriggerIsPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource*>::get(),
                        "get_TriggerIsPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::_ctor(::GlobalNamespace::OVRVirtualKeyboard*  keyboard, ::GlobalNamespace::OVRVirtualKeyboard_InputSource  inputSource, ::GlobalNamespace::OVRInput_Controller  controllerType, ::UnityEngine::Transform*  rootTransform, ::UnityEngine::Transform*  directTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard_InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboard, inputSource, controllerType, rootTransform, directTransform);
}
inline void GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::UpdateInput()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource* GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::New_ctor(::GlobalNamespace::OVRVirtualKeyboard*  keyboard, ::GlobalNamespace::OVRVirtualKeyboard_InputSource  inputSource, ::GlobalNamespace::OVRInput_Controller  controllerType, ::UnityEngine::Transform*  rootTransform, ::UnityEngine::Transform*  directTransform)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource*>(keyboard, inputSource, controllerType, rootTransform, directTransform));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource::OVRVirtualKeyboard_ControllerInputSource()   {
}
//  Writing Method size for method: ::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::*)()>(&::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x292fc48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c._UpdateInput_b__6_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::*)(::GlobalNamespace::OVRBone*)>(&::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::_UpdateInput_b__6_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x292fc50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*>::get(),
                        "<UpdateInput>b__6_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBone*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c._UpdateInput_b__6_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::*)(::GlobalNamespace::OVRBone*)>(&::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::_UpdateInput_b__6_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x292fc70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*>::get(),
                        "<UpdateInput>b__6_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBone*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::setStaticF___9(::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*>::get>(std::forward<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*>(value));
}
inline ::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c* GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*>::get>();
}
inline void GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::OVRBone*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::OVRBone*,bool>*, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*>::get>(std::forward<::System::Func_2<::GlobalNamespace::OVRBone*,bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::OVRBone*,bool>* GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::getStaticF___9__6_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::OVRBone*,bool>*, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*>::get>();
}
inline void GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::setStaticF___9__6_1(::System::Func_2<::GlobalNamespace::OVRBone*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::OVRBone*,bool>*, "<>9__6_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*>::get>(std::forward<::System::Func_2<::GlobalNamespace::OVRBone*,bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::OVRBone*,bool>* GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::getStaticF___9__6_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::OVRBone*,bool>*, "<>9__6_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*>::get>();
}
inline void GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::_UpdateInput_b__6_0(::GlobalNamespace::OVRBone*  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*>::get(),
                        "<UpdateInput>b__6_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBone*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, b);
}
inline bool GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::_UpdateInput_b__6_1(::GlobalNamespace::OVRBone*  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*>::get(),
                        "<UpdateInput>b__6_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBone*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, b);
}
inline ::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c* GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c::HandInputSource_OVRVirtualKeyboard___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_HandInputSource._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_HandInputSource::*)(::GlobalNamespace::OVRVirtualKeyboard*, ::GlobalNamespace::OVRVirtualKeyboard_InputSource, ::GlobalNamespace::OVRHand*)>(&::GlobalNamespace::OVRVirtualKeyboard_HandInputSource::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x292d638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_HandInputSource*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard_InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_HandInputSource.UpdateInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_HandInputSource::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_HandInputSource::UpdateInput)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x292f8c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_HandInputSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_HandInputSource*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRHand>& GlobalNamespace::OVRVirtualKeyboard_HandInputSource::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::GlobalNamespace::OVRHand> const& GlobalNamespace::OVRVirtualKeyboard_HandInputSource::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_HandInputSource::__cordl_internal_set__hand(::UnityW<::GlobalNamespace::OVRHand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource& GlobalNamespace::OVRVirtualKeyboard_HandInputSource::__cordl_internal_get__inputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSource;
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource const& GlobalNamespace::OVRVirtualKeyboard_HandInputSource::__cordl_internal_get__inputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSource;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_HandInputSource::__cordl_internal_set__inputSource(::GlobalNamespace::OVRVirtualKeyboard_InputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputSource = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& GlobalNamespace::OVRVirtualKeyboard_HandInputSource::__cordl_internal_get__keyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboard;
}
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& GlobalNamespace::OVRVirtualKeyboard_HandInputSource::__cordl_internal_get__keyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboard;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_HandInputSource::__cordl_internal_set__keyboard(::UnityW<::GlobalNamespace::OVRVirtualKeyboard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyboard)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& GlobalNamespace::OVRVirtualKeyboard_HandInputSource::__cordl_internal_get__skeleton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skeleton;
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& GlobalNamespace::OVRVirtualKeyboard_HandInputSource::__cordl_internal_get__skeleton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skeleton;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_HandInputSource::__cordl_internal_set__skeleton(::UnityW<::GlobalNamespace::OVRSkeleton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____skeleton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::OVRVirtualKeyboard_HandInputSource::__cordl_internal_get__lastFrameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFrameCount;
}
constexpr int32_t const& GlobalNamespace::OVRVirtualKeyboard_HandInputSource::__cordl_internal_get__lastFrameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFrameCount;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_HandInputSource::__cordl_internal_set__lastFrameCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastFrameCount = value;
}
inline void GlobalNamespace::OVRVirtualKeyboard_HandInputSource::_ctor(::GlobalNamespace::OVRVirtualKeyboard*  keyboard, ::GlobalNamespace::OVRVirtualKeyboard_InputSource  inputSource, ::GlobalNamespace::OVRHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_HandInputSource*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard_InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboard, inputSource, hand);
}
inline void GlobalNamespace::OVRVirtualKeyboard_HandInputSource::UpdateInput()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_HandInputSource*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRVirtualKeyboard_HandInputSource* GlobalNamespace::OVRVirtualKeyboard_HandInputSource::New_ctor(::GlobalNamespace::OVRVirtualKeyboard*  keyboard, ::GlobalNamespace::OVRVirtualKeyboard_InputSource  inputSource, ::GlobalNamespace::OVRHand*  hand)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRVirtualKeyboard_HandInputSource*>(keyboard, inputSource, hand));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard_HandInputSource::OVRVirtualKeyboard_HandInputSource()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener::*)(::GlobalNamespace::OVRVirtualKeyboard*)>(&::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x292a908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener.OnEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener::*)(::GlobalNamespace::OVRPlugin_EventDataBuffer)>(&::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener::OnEvent)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x292fc90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener*>::get(),
                        "OnEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_EventDataBuffer>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener::__cordl_internal_get_keyboard_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboard_;
}
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener::__cordl_internal_get_keyboard_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboard_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener::__cordl_internal_set_keyboard_(::UnityW<::GlobalNamespace::OVRVirtualKeyboard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyboard_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener::_ctor(::GlobalNamespace::OVRVirtualKeyboard*  keyboard)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboard);
}
inline void GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener::OnEvent(::GlobalNamespace::OVRPlugin_EventDataBuffer  eventDataBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener*>::get(),
                        "OnEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_EventDataBuffer>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventDataBuffer);
}
inline ::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener* GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener::New_ctor(::GlobalNamespace::OVRVirtualKeyboard*  keyboard)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener*>(keyboard));
}
/// @brief Convert operator to "::GlobalNamespace::OVRManager_EventListener"
constexpr  GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener::operator ::GlobalNamespace::OVRManager_EventListener*() noexcept {
return static_cast<::GlobalNamespace::OVRManager_EventListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRManager_EventListener"
constexpr ::GlobalNamespace::OVRManager_EventListener* GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener::i___GlobalNamespace__OVRManager_EventListener() noexcept {
return static_cast<::GlobalNamespace::OVRManager_EventListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener::OVRVirtualKeyboard_KeyboardEventListener()   {
}
// Ctor Parameters [CppParam { name: "buffer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "bufferLength", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasTexture", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "materials", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo::OVRVirtualKeyboard_VirtualKeyboardTextureInfo(::System::IntPtr  buffer, uint32_t  bufferLength, ::UnityW<::UnityEngine::Texture2D>  texture, bool  hasTexture, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  materials) noexcept  {
this->buffer = buffer;
this->bufferLength = bufferLength;
this->texture = texture;
this->hasTexture = hasTexture;
this->materials = materials;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo::OVRVirtualKeyboard_VirtualKeyboardTextureInfo()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent::*)()>(&::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x292e79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent* GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent::OVRVirtualKeyboard_CommitTextUnityEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard___c::*)()>(&::GlobalNamespace::OVRVirtualKeyboard___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x292feec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard___c._InitializeGlTFModel_b__89_2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRVirtualKeyboard___c::*)(::StringW)>(&::GlobalNamespace::OVRVirtualKeyboard___c::_InitializeGlTFModel_b__89_2)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x292fef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard___c*>::get(),
                        "<InitializeGlTFModel>b__89_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard___c._PopulateCollision_b__91_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRVirtualKeyboard___c::*)(::UnityEngine::MeshFilter*)>(&::GlobalNamespace::OVRVirtualKeyboard___c::_PopulateCollision_b__91_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x292ff80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard___c*>::get(),
                        "<PopulateCollision>b__91_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshFilter*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRVirtualKeyboard___c::setStaticF___9(::GlobalNamespace::OVRVirtualKeyboard___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRVirtualKeyboard___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard___c*>::get>(std::forward<::GlobalNamespace::OVRVirtualKeyboard___c*>(value));
}
inline ::GlobalNamespace::OVRVirtualKeyboard___c* GlobalNamespace::OVRVirtualKeyboard___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRVirtualKeyboard___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard___c*>::get>();
}
inline void GlobalNamespace::OVRVirtualKeyboard___c::setStaticF___9__89_2(::System::Func_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,bool>*, "<>9__89_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard___c*>::get>(std::forward<::System::Func_2<::StringW,bool>*>(value));
}
inline ::System::Func_2<::StringW,bool>* GlobalNamespace::OVRVirtualKeyboard___c::getStaticF___9__89_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,bool>*, "<>9__89_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard___c*>::get>();
}
inline void GlobalNamespace::OVRVirtualKeyboard___c::setStaticF___9__91_0(::System::Func_2<::UnityW<::UnityEngine::MeshFilter>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::MeshFilter>,bool>*, "<>9__91_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard___c*>::get>(std::forward<::System::Func_2<::UnityW<::UnityEngine::MeshFilter>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::MeshFilter>,bool>* GlobalNamespace::OVRVirtualKeyboard___c::getStaticF___9__91_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::MeshFilter>,bool>*, "<>9__91_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard___c*>::get>();
}
inline void GlobalNamespace::OVRVirtualKeyboard___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRVirtualKeyboard___c::_InitializeGlTFModel_b__89_2(::StringW  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard___c*>::get(),
                        "<InitializeGlTFModel>b__89_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, p);
}
inline bool GlobalNamespace::OVRVirtualKeyboard___c::_PopulateCollision_b__91_0(::UnityEngine::MeshFilter*  mesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard___c*>::get(),
                        "<PopulateCollision>b__91_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshFilter*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, mesh);
}
inline ::GlobalNamespace::OVRVirtualKeyboard___c* GlobalNamespace::OVRVirtualKeyboard___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRVirtualKeyboard___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard___c::OVRVirtualKeyboard___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::*)(int32_t)>(&::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x292c1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::*)()>(&::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x292ffe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::*)()>(&::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::MoveNext)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x292ffec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::*)()>(&::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2930330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::*)()>(&::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2930338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::*)()>(&::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2930370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRVirtualKeyboard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IEnumerator*& GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::__cordl_internal_get__loadGlbCoroutine_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadGlbCoroutine_5__2;
}
constexpr ::System::Collections::IEnumerator* const& GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::__cordl_internal_get__loadGlbCoroutine_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadGlbCoroutine_5__2;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::__cordl_internal_set__loadGlbCoroutine_5__2(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadGlbCoroutine_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89* GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__89::OVRVirtualKeyboard__InitializeGlTFModel_d__89()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.add_CommitText
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::OVRVirtualKeyboard::add_CommitText)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2929570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "add_CommitText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.remove_CommitText
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::OVRVirtualKeyboard::remove_CommitText)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2929620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "remove_CommitText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.add_Backspace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::add_Backspace)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x29296d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "add_Backspace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.remove_Backspace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::remove_Backspace)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x292976c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "remove_Backspace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.add_Enter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::add_Enter)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2929808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "add_Enter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.remove_Enter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::remove_Enter)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x29298a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "remove_Enter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.add_KeyboardShown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::add_KeyboardShown)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2929940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "add_KeyboardShown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.remove_KeyboardShown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::remove_KeyboardShown)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x29299dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "remove_KeyboardShown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.add_KeyboardHidden
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::add_KeyboardHidden)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2929a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "add_KeyboardHidden",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.remove_KeyboardHidden
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::remove_KeyboardHidden)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2929b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "remove_KeyboardHidden",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.get_Collider
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Collider> (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::get_Collider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2929bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "get_Collider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.set_Collider
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::OVRVirtualKeyboard::set_Collider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2929bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "set_Collider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.get_TextCommitField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UI::InputField> (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::get_TextCommitField)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2929bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "get_TextCommitField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.set_TextCommitField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::UnityEngine::UI::InputField*)>(&::GlobalNamespace::OVRVirtualKeyboard::set_TextCommitField)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2929c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "set_TextCommitField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::InputField*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.get_TextHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::get_TextHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2929f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "get_TextHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.set_TextHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*)>(&::GlobalNamespace::OVRVirtualKeyboard::set_TextHandler)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x2929f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "set_TextHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::Awake)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x292a37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::OnDestroy)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x292a930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x292b13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x292b428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.UseSuggestedLocation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition)>(&::GlobalNamespace::OVRVirtualKeyboard::UseSuggestedLocation)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x292b440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "UseSuggestedLocation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.SendVirtualKeyboardRayInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::UnityEngine::Transform*, ::GlobalNamespace::OVRVirtualKeyboard_InputSource, bool, bool)>(&::GlobalNamespace::OVRVirtualKeyboard::SendVirtualKeyboardRayInput)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x292b9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "SendVirtualKeyboardRayInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard_InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.SendVirtualKeyboardDirectInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::UnityEngine::Vector3, ::GlobalNamespace::OVRVirtualKeyboard_InputSource, bool, ::UnityEngine::Transform*)>(&::GlobalNamespace::OVRVirtualKeyboard::SendVirtualKeyboardDirectInput)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x292bf90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "SendVirtualKeyboardDirectInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard_InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.ChangeTextContext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::StringW)>(&::GlobalNamespace::OVRVirtualKeyboard::ChangeTextContext)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x292c058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "ChangeTextContext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.LoadRuntimeVirtualKeyboardMesh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::LoadRuntimeVirtualKeyboardMesh)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x292c15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "LoadRuntimeVirtualKeyboardMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.InitializeGlTFModel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::InitializeGlTFModel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x292c188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "InitializeGlTFModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.ApplyHideFlags
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRVirtualKeyboard::ApplyHideFlags)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x292c210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "ApplyHideFlags",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.PopulateCollision
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::PopulateCollision)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x292c28c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "PopulateCollision",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.ShowKeyboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::ShowKeyboard)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x292b140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "ShowKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.SetKeyboardVisibility
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(bool)>(&::GlobalNamespace::OVRVirtualKeyboard::SetKeyboardVisibility)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x292c538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "SetKeyboardVisibility",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.HideKeyboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::HideKeyboard)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x292b42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "HideKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.DestroyKeyboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::DestroyKeyboard)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x292ae20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "DestroyKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.MaxElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRVirtualKeyboard::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRVirtualKeyboard::MaxElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x292c650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "MaxElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.ComputeLocation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationInfo (::GlobalNamespace::OVRVirtualKeyboard::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRVirtualKeyboard::ComputeLocation)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x292b664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "ComputeLocation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::Update)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x292c664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.LateUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::LateUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x292d218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "LateUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.SendVirtualKeyboardInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource, ::GlobalNamespace::OVRPose, bool, ::UnityEngine::Transform*)>(&::GlobalNamespace::OVRVirtualKeyboard::SendVirtualKeyboardInput)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x292bd98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "SendVirtualKeyboardInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.UpdateInputs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::UpdateInputs)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x292c6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "UpdateInputs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.SyncKeyboardLocation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::SyncKeyboardLocation)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x292b71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "SyncKeyboardLocation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.UpdateAnimationState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::UpdateAnimationState)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0x292cbd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "UpdateAnimationState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.AnimationStatesBufferProvider
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::GlobalNamespace::OVRVirtualKeyboard::*)(int32_t, int32_t)>(&::GlobalNamespace::OVRVirtualKeyboard::AnimationStatesBufferProvider)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x292d7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "AnimationStatesBufferProvider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.AnimationStateHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::ByRef<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState>)>(&::GlobalNamespace::OVRVirtualKeyboard::AnimationStateHandler)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x292d890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "AnimationStateHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnCommitText
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::StringW)>(&::GlobalNamespace::OVRVirtualKeyboard::OnCommitText)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x292da00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnCommitText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnTextHandlerChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::StringW)>(&::GlobalNamespace::OVRVirtualKeyboard::OnTextHandlerChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x292dee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnTextHandlerChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.ChangeTextContextInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::StringW)>(&::GlobalNamespace::OVRVirtualKeyboard::ChangeTextContextInternal)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x292a2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "ChangeTextContextInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnBackspace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::OnBackspace)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x292deec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnBackspace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::OnEnter)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x292e244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnKeyboardShown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::OnKeyboardShown)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x292e5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnKeyboardShown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnKeyboardHidden
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::OnKeyboardHidden)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x292e624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnKeyboardHidden",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.UpdateVisibleState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::UpdateVisibleState)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x292e5cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "UpdateVisibleState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x292e638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard._InitializeGlTFModel_b__89_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::MemoryStream* (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::_InitializeGlTFModel_b__89_0)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x292e878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "<InitializeGlTFModel>b__89_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard._InitializeGlTFModel_b__89_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (::GlobalNamespace::OVRVirtualKeyboard::*)(::StringW, ::UnityEngine::Material*)>(&::GlobalNamespace::OVRVirtualKeyboard::_InitializeGlTFModel_b__89_1)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x292eb2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "<InitializeGlTFModel>b__89_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_CommitText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CommitText;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_CommitText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CommitText;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_CommitText(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CommitText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_Backspace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Backspace;
}
constexpr ::System::Action* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_Backspace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Backspace;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_Backspace(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Backspace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_Enter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enter;
}
constexpr ::System::Action* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_Enter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enter;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_Enter(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Enter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_KeyboardShown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyboardShown;
}
constexpr ::System::Action* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_KeyboardShown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyboardShown;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_KeyboardShown(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KeyboardShown)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_KeyboardHidden()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyboardHidden;
}
constexpr ::System::Action* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_KeyboardHidden() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyboardHidden;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_KeyboardHidden(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KeyboardHidden)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__Collider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Collider_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__Collider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Collider_k__BackingField;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set__Collider_k__BackingField(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Collider_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_InitialPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialPosition;
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_InitialPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialPosition;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_InitialPosition(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InitialPosition = value;
}
constexpr ::UnityW<::UnityEngine::UI::InputField>& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_textCommitField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textCommitField;
}
constexpr ::UnityW<::UnityEngine::UI::InputField> const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_textCommitField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textCommitField;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_textCommitField(::UnityW<::UnityEngine::UI::InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textCommitField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler>& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_textHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textHandler;
}
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler> const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_textHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textHandler;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_textHandler(::UnityW<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__runtimeTextHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runtimeTextHandler;
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__runtimeTextHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runtimeTextHandler;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set__runtimeTextHandler(::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____runtimeTextHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_leftControllerRootTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerRootTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_leftControllerRootTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerRootTransform;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_leftControllerRootTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftControllerRootTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_leftControllerDirectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerDirectTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_leftControllerDirectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerDirectTransform;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_leftControllerDirectTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftControllerDirectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_rightControllerRootTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerRootTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_rightControllerRootTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerRootTransform;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_rightControllerRootTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightControllerRootTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_rightControllerDirectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerDirectTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_rightControllerDirectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerDirectTransform;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_rightControllerDirectTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightControllerDirectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_controllerDirectInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerDirectInteraction;
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_controllerDirectInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerDirectInteraction;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_controllerDirectInteraction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerDirectInteraction = value;
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_controllerRayInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerRayInteraction;
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_controllerRayInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerRayInteraction;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_controllerRayInteraction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerRayInteraction = value;
}
constexpr ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_controllerRaycaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerRaycaster;
}
constexpr ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_controllerRaycaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerRaycaster;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_controllerRaycaster(::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controllerRaycaster)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRHand>& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_handLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handLeft;
}
constexpr ::UnityW<::GlobalNamespace::OVRHand> const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_handLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handLeft;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_handLeft(::UnityW<::GlobalNamespace::OVRHand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handLeft)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRHand>& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_handRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRight;
}
constexpr ::UnityW<::GlobalNamespace::OVRHand> const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_handRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRight;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_handRight(::UnityW<::GlobalNamespace::OVRHand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handRight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_handDirectInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handDirectInteraction;
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_handDirectInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handDirectInteraction;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_handDirectInteraction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handDirectInteraction = value;
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_handRayInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRayInteraction;
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_handRayInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRayInteraction;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_handRayInteraction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handRayInteraction = value;
}
constexpr ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_handRaycaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRaycaster;
}
constexpr ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_handRaycaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRaycaster;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_handRaycaster(::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handRaycaster)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_keyboardModelShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardModelShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_keyboardModelShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardModelShader;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_keyboardModelShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyboardModelShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_keyboardModelAlphaBlendShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardModelAlphaBlendShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_keyboardModelAlphaBlendShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardModelAlphaBlendShader;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_keyboardModelAlphaBlendShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyboardModelAlphaBlendShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_InputEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputEnabled;
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_InputEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputEnabled;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_InputEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InputEnabled = value;
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_CommitTextEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CommitTextEvent;
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_CommitTextEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CommitTextEvent;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_CommitTextEvent(::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CommitTextEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_BackspaceEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BackspaceEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_BackspaceEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BackspaceEvent;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_BackspaceEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BackspaceEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_EnterEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnterEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_EnterEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnterEvent;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_EnterEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___EnterEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_KeyboardShownEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyboardShownEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_KeyboardShownEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyboardShownEvent;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_KeyboardShownEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KeyboardShownEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_KeyboardHiddenEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyboardHiddenEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_KeyboardHiddenEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyboardHiddenEvent;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_KeyboardHiddenEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KeyboardHiddenEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_isKeyboardCreated_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKeyboardCreated_;
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_isKeyboardCreated_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKeyboardCreated_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_isKeyboardCreated_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isKeyboardCreated_ = value;
}
constexpr uint64_t& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_keyboardSpace_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardSpace_;
}
constexpr uint64_t const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_keyboardSpace_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardSpace_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_keyboardSpace_(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyboardSpace_ = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo>*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_virtualKeyboardTextures_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualKeyboardTextures_;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo>* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_virtualKeyboardTextures_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualKeyboardTextures_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_virtualKeyboardTextures_(::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___virtualKeyboardTextures_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRGLTFScene& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_virtualKeyboardScene_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualKeyboardScene_;
}
constexpr ::GlobalNamespace::OVRGLTFScene const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_virtualKeyboardScene_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualKeyboardScene_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_virtualKeyboardScene_(::GlobalNamespace::OVRGLTFScene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___virtualKeyboardScene_ = value;
}
constexpr uint64_t& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_virtualKeyboardModelKey_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualKeyboardModelKey_;
}
constexpr uint64_t const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_virtualKeyboardModelKey_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualKeyboardModelKey_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_virtualKeyboardModelKey_(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___virtualKeyboardModelKey_ = value;
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_modelInitialized_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelInitialized_;
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_modelInitialized_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelInitialized_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_modelInitialized_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modelInitialized_ = value;
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_modelAvailable_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelAvailable_;
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_modelAvailable_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelAvailable_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_modelAvailable_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modelAvailable_ = value;
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_keyboardVisible_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardVisible_;
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_keyboardVisible_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardVisible_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_keyboardVisible_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyboardVisible_ = value;
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__interactorRootTransformOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorRootTransformOverride;
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__interactorRootTransformOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorRootTransformOverride;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set__interactorRootTransformOverride(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____interactorRootTransformOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__inputSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSources;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__inputSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSources;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set__inputSources(::System::Collections::Generic::List_1<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputSources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_keyboardEventListener_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardEventListener_;
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_keyboardEventListener_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardEventListener_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_keyboardEventListener_(::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyboardEventListener_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_gltfModelCoroutine_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gltfModelCoroutine_;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get_gltfModelCoroutine_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gltfModelCoroutine_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set_gltfModelCoroutine_(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gltfModelCoroutine_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRGLTFLoader*& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__gltfLoader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gltfLoader;
}
constexpr ::GlobalNamespace::OVRGLTFLoader* const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__gltfLoader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gltfLoader;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set__gltfLoader(::GlobalNamespace::OVRGLTFLoader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gltfLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__animationStateCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationStateCount;
}
constexpr int32_t const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__animationStateCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationStateCount;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set__animationStateCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationStateCount = value;
}
constexpr int32_t& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__animationStateBufferLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationStateBufferLength;
}
constexpr int32_t const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__animationStateBufferLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationStateBufferLength;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set__animationStateBufferLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationStateBufferLength = value;
}
constexpr ::System::IntPtr& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__animationStateBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationStateBuffer;
}
constexpr ::System::IntPtr const& GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_get__animationStateBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationStateBuffer;
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__cordl_internal_set__animationStateBuffer(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationStateBuffer = value;
}
inline void GlobalNamespace::OVRVirtualKeyboard::setStaticF_singleton_(::UnityW<::GlobalNamespace::OVRVirtualKeyboard>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::OVRVirtualKeyboard>, "singleton_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get>(std::forward<::UnityW<::GlobalNamespace::OVRVirtualKeyboard>>(value));
}
inline ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> GlobalNamespace::OVRVirtualKeyboard::getStaticF_singleton_()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::OVRVirtualKeyboard>, "singleton_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get>();
}
inline void GlobalNamespace::OVRVirtualKeyboard::add_CommitText(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "add_CommitText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::remove_CommitText(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "remove_CommitText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::add_Backspace(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "add_Backspace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::remove_Backspace(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "remove_Backspace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::add_Enter(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "add_Enter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::remove_Enter(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "remove_Enter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::add_KeyboardShown(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "add_KeyboardShown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::remove_KeyboardShown(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "remove_KeyboardShown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::add_KeyboardHidden(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "add_KeyboardHidden",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::remove_KeyboardHidden(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "remove_KeyboardHidden",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Collider> GlobalNamespace::OVRVirtualKeyboard::get_Collider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "get_Collider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::set_Collider(::UnityEngine::Collider*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "set_Collider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::InputField> GlobalNamespace::OVRVirtualKeyboard::get_TextCommitField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "get_TextCommitField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::InputField>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::set_TextCommitField(::UnityEngine::UI::InputField*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "set_TextCommitField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::InputField*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* GlobalNamespace::OVRVirtualKeyboard::get_TextHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "get_TextHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::set_TextHandler(::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "set_TextHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::UseSuggestedLocation(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "UseSuggestedLocation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline void GlobalNamespace::OVRVirtualKeyboard::SendVirtualKeyboardRayInput(::UnityEngine::Transform*  inputTransform, ::GlobalNamespace::OVRVirtualKeyboard_InputSource  source, bool  isPressed, bool  useRaycastMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "SendVirtualKeyboardRayInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard_InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputTransform, source, isPressed, useRaycastMask);
}
inline void GlobalNamespace::OVRVirtualKeyboard::SendVirtualKeyboardDirectInput(::UnityEngine::Vector3  position, ::GlobalNamespace::OVRVirtualKeyboard_InputSource  source, bool  isPressed, ::UnityEngine::Transform*  interactorRootTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "SendVirtualKeyboardDirectInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard_InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, source, isPressed, interactorRootTransform);
}
inline void GlobalNamespace::OVRVirtualKeyboard::ChangeTextContext(::StringW  textContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "ChangeTextContext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textContext);
}
inline void GlobalNamespace::OVRVirtualKeyboard::LoadRuntimeVirtualKeyboardMesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "LoadRuntimeVirtualKeyboardMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRVirtualKeyboard::InitializeGlTFModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "InitializeGlTFModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::ApplyHideFlags(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "ApplyHideFlags",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
inline void GlobalNamespace::OVRVirtualKeyboard::PopulateCollision()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "PopulateCollision",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::ShowKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "ShowKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::SetKeyboardVisibility(bool  visible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "SetKeyboardVisibility",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visible);
}
inline void GlobalNamespace::OVRVirtualKeyboard::HideKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "HideKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::DestroyKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "DestroyKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRVirtualKeyboard::MaxElement(::UnityEngine::Vector3  vec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "MaxElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, vec);
}
inline ::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationInfo GlobalNamespace::OVRVirtualKeyboard::ComputeLocation(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "ComputeLocation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationInfo, false>(this, ___internal_method, transform);
}
inline void GlobalNamespace::OVRVirtualKeyboard::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "LateUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::SendVirtualKeyboardInput(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource  inputSource, ::GlobalNamespace::OVRPose  pose, bool  isPressed, ::UnityEngine::Transform*  interactorRootTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "SendVirtualKeyboardInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputSource, pose, isPressed, interactorRootTransform);
}
inline void GlobalNamespace::OVRVirtualKeyboard::UpdateInputs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "UpdateInputs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::SyncKeyboardLocation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "SyncKeyboardLocation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::UpdateAnimationState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "UpdateAnimationState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IntPtr GlobalNamespace::OVRVirtualKeyboard::AnimationStatesBufferProvider(int32_t  bufferLength, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "AnimationStatesBufferProvider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, bufferLength, count);
}
inline void GlobalNamespace::OVRVirtualKeyboard::AnimationStateHandler(::ByRef<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState>  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "AnimationStateHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnCommitText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnCommitText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnTextHandlerChange(::StringW  textContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnTextHandlerChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textContext);
}
inline void GlobalNamespace::OVRVirtualKeyboard::ChangeTextContextInternal(::StringW  textContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "ChangeTextContextInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textContext);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnBackspace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnBackspace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnEnter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnKeyboardShown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnKeyboardShown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnKeyboardHidden()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "OnKeyboardHidden",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::UpdateVisibleState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "UpdateVisibleState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IO::MemoryStream* GlobalNamespace::OVRVirtualKeyboard::_InitializeGlTFModel_b__89_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "<InitializeGlTFModel>b__89_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::MemoryStream*, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::OVRVirtualKeyboard::_InitializeGlTFModel_b__89_1(::StringW  rawUri, ::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                        "<InitializeGlTFModel>b__89_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(this, ___internal_method, rawUri, mat);
}
inline ::GlobalNamespace::OVRVirtualKeyboard* GlobalNamespace::OVRVirtualKeyboard::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRVirtualKeyboard*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard::OVRVirtualKeyboard()   {
}
