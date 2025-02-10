#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRCompositor.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRCompositor_def.hpp"
#include "OVR/OpenVR/zzzz__Compositor_CumulativeStats_def.hpp"
#include "OVR/OpenVR/zzzz__Compositor_FrameTiming_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVRCompositorError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRCompositorTimingMode_def.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSubmitFlags_def.hpp"
#include "OVR/OpenVR/zzzz__HmdColor_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVRCompositor_def.hpp"
#include "OVR/OpenVR/zzzz__Texture_t_def.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetTrackingSpace._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__SetTrackingSpace::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__SetTrackingSpace::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296bd40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetTrackingSpace.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__SetTrackingSpace::*)(::OVR::OpenVR::ETrackingUniverseOrigin)>(&::OVR::OpenVR::IVRCompositor__SetTrackingSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296bdcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetTrackingSpace.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__SetTrackingSpace::*)(::OVR::OpenVR::ETrackingUniverseOrigin, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__SetTrackingSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x296bde0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetTrackingSpace.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__SetTrackingSpace::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__SetTrackingSpace::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296be64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__SetTrackingSpace::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__SetTrackingSpace::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eOrigin);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__SetTrackingSpace::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eOrigin, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__SetTrackingSpace::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__SetTrackingSpace* OVR::OpenVR::IVRCompositor__SetTrackingSpace::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__SetTrackingSpace::IVRCompositor__SetTrackingSpace()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetTrackingSpace._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetTrackingSpace::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetTrackingSpace::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296be70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetTrackingSpace.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackingUniverseOrigin (::OVR::OpenVR::IVRCompositor__GetTrackingSpace::*)()>(&::OVR::OpenVR::IVRCompositor__GetTrackingSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296bef8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetTrackingSpace.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetTrackingSpace::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetTrackingSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296bf0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetTrackingSpace.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackingUniverseOrigin (::OVR::OpenVR::IVRCompositor__GetTrackingSpace::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetTrackingSpace::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296bf2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetTrackingSpace::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::ETrackingUniverseOrigin OVR::OpenVR::IVRCompositor__GetTrackingSpace::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackingUniverseOrigin, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetTrackingSpace::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::ETrackingUniverseOrigin OVR::OpenVR::IVRCompositor__GetTrackingSpace::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackingUniverseOrigin, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetTrackingSpace* OVR::OpenVR::IVRCompositor__GetTrackingSpace::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetTrackingSpace::IVRCompositor__GetTrackingSpace()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__WaitGetPoses._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__WaitGetPoses::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__WaitGetPoses::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x296bf54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__WaitGetPoses.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__WaitGetPoses::*)(::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t, ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t)>(&::OVR::OpenVR::IVRCompositor__WaitGetPoses::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296bff4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__WaitGetPoses.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__WaitGetPoses::*)(::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t, ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__WaitGetPoses::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x296c008;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__WaitGetPoses.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__WaitGetPoses::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__WaitGetPoses::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296c0bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__WaitGetPoses::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__WaitGetPoses::Invoke(::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pRenderPoseArray, uint32_t  unRenderPoseArrayCount, ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pGamePoseArray, uint32_t  unGamePoseArrayCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__WaitGetPoses::BeginInvoke(::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pRenderPoseArray, uint32_t  unRenderPoseArrayCount, ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pGamePoseArray, uint32_t  unGamePoseArrayCount, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__WaitGetPoses::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__WaitGetPoses* OVR::OpenVR::IVRCompositor__WaitGetPoses::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__WaitGetPoses::IVRCompositor__WaitGetPoses()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoses._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetLastPoses::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetLastPoses::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x296c0e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoses*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoses.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetLastPoses::*)(::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t, ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t)>(&::OVR::OpenVR::IVRCompositor__GetLastPoses::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296c184;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoses*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoses*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoses.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetLastPoses::*)(::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t, ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetLastPoses::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x296c198;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoses*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoses*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoses.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetLastPoses::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetLastPoses::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296c24c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoses*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoses*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetLastPoses::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoses*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetLastPoses::Invoke(::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pRenderPoseArray, uint32_t  unRenderPoseArrayCount, ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pGamePoseArray, uint32_t  unGamePoseArrayCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoses*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetLastPoses::BeginInvoke(::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pRenderPoseArray, uint32_t  unRenderPoseArrayCount, ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pGamePoseArray, uint32_t  unGamePoseArrayCount, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoses*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetLastPoses::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoses*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetLastPoses* OVR::OpenVR::IVRCompositor__GetLastPoses::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__GetLastPoses*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetLastPoses::IVRCompositor__GetLastPoses()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296c274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::*)(uint32_t, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(&::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296c300;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::*)(uint32_t, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::BeginInvoke)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x296c314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::*)(::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x296c3f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::Invoke(uint32_t  unDeviceIndex, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>  pOutputPose, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>  pOutputGamePose)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, unDeviceIndex, pOutputPose, pOutputGamePose);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::BeginInvoke(uint32_t  unDeviceIndex, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>  pOutputPose, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>  pOutputGamePose, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, pOutputPose, pOutputGamePose, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::EndInvoke(::ByRef<::OVR::OpenVR::TrackedDevicePose_t>  pOutputPose, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>  pOutputGamePose, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, pOutputPose, pOutputGamePose, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex* OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::IVRCompositor__GetLastPoseForTrackedDeviceIndex()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__Submit._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__Submit::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__Submit::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296c424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__Submit*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__Submit.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__Submit::*)(::OVR::OpenVR::EVREye, ::ByRef<::OVR::OpenVR::Texture_t>, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::OVR::OpenVR::EVRSubmitFlags)>(&::OVR::OpenVR::IVRCompositor__Submit::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296c4b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__Submit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__Submit*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__Submit.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__Submit::*)(::OVR::OpenVR::EVREye, ::ByRef<::OVR::OpenVR::Texture_t>, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::OVR::OpenVR::EVRSubmitFlags, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__Submit::BeginInvoke)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x296c4c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__Submit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__Submit*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__Submit.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__Submit::*)(::ByRef<::OVR::OpenVR::Texture_t>, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__Submit::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x296c5e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__Submit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__Submit*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__Submit::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__Submit*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__Submit::Invoke(::OVR::OpenVR::EVREye  eEye, ::ByRef<::OVR::OpenVR::Texture_t>  pTexture, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>  pBounds, ::OVR::OpenVR::EVRSubmitFlags  nSubmitFlags)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__Submit*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, eEye, pTexture, pBounds, nSubmitFlags);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__Submit::BeginInvoke(::OVR::OpenVR::EVREye  eEye, ::ByRef<::OVR::OpenVR::Texture_t>  pTexture, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>  pBounds, ::OVR::OpenVR::EVRSubmitFlags  nSubmitFlags, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__Submit*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, pTexture, pBounds, nSubmitFlags, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__Submit::EndInvoke(::ByRef<::OVR::OpenVR::Texture_t>  pTexture, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>  pBounds, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__Submit*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, pTexture, pBounds, result);
}
inline ::OVR::OpenVR::IVRCompositor__Submit* OVR::OpenVR::IVRCompositor__Submit::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__Submit*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__Submit::IVRCompositor__Submit()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296c61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::*)()>(&::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296c6a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296c6b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296c6d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame* OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::IVRCompositor__ClearLastSubmittedFrame()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__PostPresentHandoff._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__PostPresentHandoff::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__PostPresentHandoff::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296c6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__PostPresentHandoff.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__PostPresentHandoff::*)()>(&::OVR::OpenVR::IVRCompositor__PostPresentHandoff::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296c76c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__PostPresentHandoff.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__PostPresentHandoff::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__PostPresentHandoff::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296c780;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__PostPresentHandoff.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__PostPresentHandoff::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__PostPresentHandoff::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296c7a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__PostPresentHandoff::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__PostPresentHandoff::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__PostPresentHandoff::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__PostPresentHandoff::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__PostPresentHandoff* OVR::OpenVR::IVRCompositor__PostPresentHandoff::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__PostPresentHandoff::IVRCompositor__PostPresentHandoff()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTiming._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetFrameTiming::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetFrameTiming::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x296c7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTiming.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRCompositor__GetFrameTiming::*)(::ByRef<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t)>(&::OVR::OpenVR::IVRCompositor__GetFrameTiming::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296c84c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTiming.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetFrameTiming::*)(::ByRef<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetFrameTiming::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x296c860;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTiming.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRCompositor__GetFrameTiming::*)(::ByRef<::OVR::OpenVR::Compositor_FrameTiming>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetFrameTiming::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x296c918;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetFrameTiming::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRCompositor__GetFrameTiming::Invoke(::ByRef<::OVR::OpenVR::Compositor_FrameTiming>  pTiming, uint32_t  unFramesAgo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pTiming, unFramesAgo);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetFrameTiming::BeginInvoke(::ByRef<::OVR::OpenVR::Compositor_FrameTiming>  pTiming, uint32_t  unFramesAgo, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pTiming, unFramesAgo, callback, object);
}
inline bool OVR::OpenVR::IVRCompositor__GetFrameTiming::EndInvoke(::ByRef<::OVR::OpenVR::Compositor_FrameTiming>  pTiming, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pTiming, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetFrameTiming* OVR::OpenVR::IVRCompositor__GetFrameTiming::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetFrameTiming::IVRCompositor__GetFrameTiming()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetFrameTimings::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetFrameTimings::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x296c944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimings.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetFrameTimings::*)(::ByRef<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t)>(&::OVR::OpenVR::IVRCompositor__GetFrameTimings::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296c9e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimings.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetFrameTimings::*)(::ByRef<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetFrameTimings::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x296c9f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimings.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetFrameTimings::*)(::ByRef<::OVR::OpenVR::Compositor_FrameTiming>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetFrameTimings::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x296cab0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetFrameTimings::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetFrameTimings::Invoke(::ByRef<::OVR::OpenVR::Compositor_FrameTiming>  pTiming, uint32_t  nFrames)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pTiming, nFrames);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetFrameTimings::BeginInvoke(::ByRef<::OVR::OpenVR::Compositor_FrameTiming>  pTiming, uint32_t  nFrames, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pTiming, nFrames, callback, object);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetFrameTimings::EndInvoke(::ByRef<::OVR::OpenVR::Compositor_FrameTiming>  pTiming, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pTiming, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetFrameTimings* OVR::OpenVR::IVRCompositor__GetFrameTimings::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetFrameTimings::IVRCompositor__GetFrameTimings()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296cadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::*)()>(&::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296cb64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296cb78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296cb98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline float_t OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline float_t OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining* OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::IVRCompositor__GetFrameTimeRemaining()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCumulativeStats._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetCumulativeStats::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetCumulativeStats::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x296cbc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCumulativeStats.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetCumulativeStats::*)(::ByRef<::OVR::OpenVR::Compositor_CumulativeStats>, uint32_t)>(&::OVR::OpenVR::IVRCompositor__GetCumulativeStats::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296cc60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCumulativeStats.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetCumulativeStats::*)(::ByRef<::OVR::OpenVR::Compositor_CumulativeStats>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetCumulativeStats::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x296cc74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCumulativeStats.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetCumulativeStats::*)(::ByRef<::OVR::OpenVR::Compositor_CumulativeStats>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetCumulativeStats::EndInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x296cd2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetCumulativeStats::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__GetCumulativeStats::Invoke(::ByRef<::OVR::OpenVR::Compositor_CumulativeStats>  pStats, uint32_t  nStatsSizeInBytes)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pStats, nStatsSizeInBytes);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetCumulativeStats::BeginInvoke(::ByRef<::OVR::OpenVR::Compositor_CumulativeStats>  pStats, uint32_t  nStatsSizeInBytes, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pStats, nStatsSizeInBytes, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__GetCumulativeStats::EndInvoke(::ByRef<::OVR::OpenVR::Compositor_CumulativeStats>  pStats, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pStats, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetCumulativeStats* OVR::OpenVR::IVRCompositor__GetCumulativeStats::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetCumulativeStats::IVRCompositor__GetCumulativeStats()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeToColor._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__FadeToColor::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__FadeToColor::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296cd48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeToColor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeToColor.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__FadeToColor::*)(float_t, float_t, float_t, float_t, float_t, bool)>(&::OVR::OpenVR::IVRCompositor__FadeToColor::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x296cdd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeToColor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeToColor*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeToColor.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__FadeToColor::*)(float_t, float_t, float_t, float_t, float_t, bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__FadeToColor::BeginInvoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x296cdec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeToColor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeToColor*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeToColor.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__FadeToColor::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__FadeToColor::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296cf0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeToColor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeToColor*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__FadeToColor::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeToColor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__FadeToColor::Invoke(float_t  fSeconds, float_t  fRed, float_t  fGreen, float_t  fBlue, float_t  fAlpha, bool  bBackground)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeToColor*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__FadeToColor::BeginInvoke(float_t  fSeconds, float_t  fRed, float_t  fGreen, float_t  fBlue, float_t  fAlpha, bool  bBackground, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeToColor*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__FadeToColor::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeToColor*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__FadeToColor* OVR::OpenVR::IVRCompositor__FadeToColor::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__FadeToColor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__FadeToColor::IVRCompositor__FadeToColor()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296cf18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdColor_t (::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::*)(bool)>(&::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x296cfa4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296cfbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdColor_t (::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x296d044;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdColor_t OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::Invoke(bool  bBackground)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdColor_t, false>(this, ___internal_method, bBackground);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::BeginInvoke(bool  bBackground, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, bBackground, callback, object);
}
inline ::OVR::OpenVR::HmdColor_t OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdColor_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor* OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::IVRCompositor__GetCurrentFadeColor()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeGrid._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__FadeGrid::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__FadeGrid::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296d070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeGrid*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeGrid.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__FadeGrid::*)(float_t, bool)>(&::OVR::OpenVR::IVRCompositor__FadeGrid::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x296d0fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeGrid*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeGrid*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeGrid.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__FadeGrid::*)(float_t, bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__FadeGrid::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x296d114;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeGrid*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeGrid*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeGrid.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__FadeGrid::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__FadeGrid::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296d1d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeGrid*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeGrid*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__FadeGrid::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeGrid*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__FadeGrid::Invoke(float_t  fSeconds, bool  bFadeIn)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeGrid*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fSeconds, bFadeIn);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__FadeGrid::BeginInvoke(float_t  fSeconds, bool  bFadeIn, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeGrid*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, fSeconds, bFadeIn, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__FadeGrid::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__FadeGrid*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__FadeGrid* OVR::OpenVR::IVRCompositor__FadeGrid::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__FadeGrid*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__FadeGrid::IVRCompositor__FadeGrid()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296d1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::*)()>(&::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296d268;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296d27c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296d29c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline float_t OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline float_t OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha* OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::IVRCompositor__GetCurrentGridAlpha()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x296d2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::*)(::ByRef<::ArrayW<::OVR::OpenVR::Texture_t,::Array<::OVR::OpenVR::Texture_t>*>>, uint32_t)>(&::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296d364;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::*)(::ByRef<::ArrayW<::OVR::OpenVR::Texture_t,::Array<::OVR::OpenVR::Texture_t>*>>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x296d378;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296d40c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__SetSkyboxOverride::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__SetSkyboxOverride::Invoke(::ByRef<::ArrayW<::OVR::OpenVR::Texture_t,::Array<::OVR::OpenVR::Texture_t>*>>  pTextures, uint32_t  unTextureCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, pTextures, unTextureCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__SetSkyboxOverride::BeginInvoke(::ByRef<::ArrayW<::OVR::OpenVR::Texture_t,::Array<::OVR::OpenVR::Texture_t>*>>  pTextures, uint32_t  unTextureCount, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pTextures, unTextureCount, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__SetSkyboxOverride::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride* OVR::OpenVR::IVRCompositor__SetSkyboxOverride::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::IVRCompositor__SetSkyboxOverride()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296d434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::*)()>(&::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296d4bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296d4d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296d4f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride* OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::IVRCompositor__ClearSkyboxOverride()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorBringToFront._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorBringToFront::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__CompositorBringToFront::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296d4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorBringToFront.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorBringToFront::*)()>(&::OVR::OpenVR::IVRCompositor__CompositorBringToFront::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296d584;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorBringToFront.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__CompositorBringToFront::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__CompositorBringToFront::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296d598;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorBringToFront.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorBringToFront::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__CompositorBringToFront::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296d5b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__CompositorBringToFront::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__CompositorBringToFront::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__CompositorBringToFront::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__CompositorBringToFront::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__CompositorBringToFront* OVR::OpenVR::IVRCompositor__CompositorBringToFront::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__CompositorBringToFront::IVRCompositor__CompositorBringToFront()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorGoToBack._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorGoToBack::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__CompositorGoToBack::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296d5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorGoToBack.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorGoToBack::*)()>(&::OVR::OpenVR::IVRCompositor__CompositorGoToBack::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296d64c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorGoToBack.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__CompositorGoToBack::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__CompositorGoToBack::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296d660;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorGoToBack.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorGoToBack::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__CompositorGoToBack::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296d680;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__CompositorGoToBack::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__CompositorGoToBack::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__CompositorGoToBack::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__CompositorGoToBack::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__CompositorGoToBack* OVR::OpenVR::IVRCompositor__CompositorGoToBack::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__CompositorGoToBack::IVRCompositor__CompositorGoToBack()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorQuit._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorQuit::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__CompositorQuit::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296d68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorQuit*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorQuit.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorQuit::*)()>(&::OVR::OpenVR::IVRCompositor__CompositorQuit::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296d714;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorQuit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorQuit*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorQuit.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__CompositorQuit::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__CompositorQuit::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296d728;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorQuit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorQuit*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorQuit.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorQuit::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__CompositorQuit::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296d748;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorQuit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorQuit*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__CompositorQuit::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorQuit*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__CompositorQuit::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorQuit*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__CompositorQuit::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorQuit*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__CompositorQuit::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorQuit*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__CompositorQuit* OVR::OpenVR::IVRCompositor__CompositorQuit::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__CompositorQuit*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__CompositorQuit::IVRCompositor__CompositorQuit()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsFullscreen._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__IsFullscreen::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__IsFullscreen::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296d754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsFullscreen*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsFullscreen.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRCompositor__IsFullscreen::*)()>(&::OVR::OpenVR::IVRCompositor__IsFullscreen::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296d7dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsFullscreen*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsFullscreen*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsFullscreen.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__IsFullscreen::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__IsFullscreen::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296d7f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsFullscreen*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsFullscreen*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsFullscreen.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRCompositor__IsFullscreen::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__IsFullscreen::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296d810;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsFullscreen*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsFullscreen*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__IsFullscreen::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsFullscreen*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRCompositor__IsFullscreen::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsFullscreen*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__IsFullscreen::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsFullscreen*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRCompositor__IsFullscreen::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsFullscreen*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__IsFullscreen* OVR::OpenVR::IVRCompositor__IsFullscreen::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__IsFullscreen*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__IsFullscreen::IVRCompositor__IsFullscreen()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296d838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::*)()>(&::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296d8c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296d8d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296d8f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess* OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::IVRCompositor__GetCurrentSceneFocusProcess()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296d91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::*)()>(&::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296d9a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296d9b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296d9d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer* OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::IVRCompositor__GetLastFrameRenderer()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CanRenderScene._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__CanRenderScene::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__CanRenderScene::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296da00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CanRenderScene*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CanRenderScene.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRCompositor__CanRenderScene::*)()>(&::OVR::OpenVR::IVRCompositor__CanRenderScene::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296da88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CanRenderScene*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CanRenderScene*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CanRenderScene.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__CanRenderScene::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__CanRenderScene::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296da9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CanRenderScene*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CanRenderScene*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CanRenderScene.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRCompositor__CanRenderScene::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__CanRenderScene::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296dabc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CanRenderScene*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CanRenderScene*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__CanRenderScene::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CanRenderScene*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRCompositor__CanRenderScene::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CanRenderScene*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__CanRenderScene::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CanRenderScene*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRCompositor__CanRenderScene::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CanRenderScene*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__CanRenderScene* OVR::OpenVR::IVRCompositor__CanRenderScene::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__CanRenderScene*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__CanRenderScene::IVRCompositor__CanRenderScene()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296dae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::*)()>(&::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296db6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296db80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296dba0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ShowMirrorWindow::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__ShowMirrorWindow::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ShowMirrorWindow::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__ShowMirrorWindow::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow* OVR::OpenVR::IVRCompositor__ShowMirrorWindow::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::IVRCompositor__ShowMirrorWindow()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__HideMirrorWindow._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__HideMirrorWindow::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__HideMirrorWindow::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296dbac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__HideMirrorWindow.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__HideMirrorWindow::*)()>(&::OVR::OpenVR::IVRCompositor__HideMirrorWindow::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296dc34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__HideMirrorWindow.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__HideMirrorWindow::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__HideMirrorWindow::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296dc48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__HideMirrorWindow.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__HideMirrorWindow::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__HideMirrorWindow::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296dc68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__HideMirrorWindow::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__HideMirrorWindow::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__HideMirrorWindow::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__HideMirrorWindow::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__HideMirrorWindow* OVR::OpenVR::IVRCompositor__HideMirrorWindow::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__HideMirrorWindow::IVRCompositor__HideMirrorWindow()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296dc74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::*)()>(&::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296dcfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296dd10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296dd30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible* OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::IVRCompositor__IsMirrorWindowVisible()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorDumpImages._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorDumpImages::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__CompositorDumpImages::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296dd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorDumpImages.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorDumpImages::*)()>(&::OVR::OpenVR::IVRCompositor__CompositorDumpImages::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296dde0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorDumpImages.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__CompositorDumpImages::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__CompositorDumpImages::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296ddf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorDumpImages.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorDumpImages::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__CompositorDumpImages::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296de14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__CompositorDumpImages::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__CompositorDumpImages::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__CompositorDumpImages::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__CompositorDumpImages::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__CompositorDumpImages* OVR::OpenVR::IVRCompositor__CompositorDumpImages::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__CompositorDumpImages::IVRCompositor__CompositorDumpImages()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296de20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::*)()>(&::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296dea8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296debc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296dedc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources* OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::IVRCompositor__ShouldAppRenderWithLowResources()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296df04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::*)(bool)>(&::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x296df90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296dfa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296e030;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::Invoke(bool  bOverride)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bOverride);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::BeginInvoke(bool  bOverride, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, bOverride, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn* OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::IVRCompositor__ForceInterleavedReprojectionOn()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296e03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::*)()>(&::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296e0c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296e0d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296e0f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ForceReconnectProcess::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__ForceReconnectProcess::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ForceReconnectProcess::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__ForceReconnectProcess::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess* OVR::OpenVR::IVRCompositor__ForceReconnectProcess::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::IVRCompositor__ForceReconnectProcess()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SuspendRendering._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__SuspendRendering::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__SuspendRendering::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296e104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SuspendRendering*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SuspendRendering.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__SuspendRendering::*)(bool)>(&::OVR::OpenVR::IVRCompositor__SuspendRendering::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x296e190;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SuspendRendering*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SuspendRendering*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SuspendRendering.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__SuspendRendering::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__SuspendRendering::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296e1a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SuspendRendering*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SuspendRendering*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SuspendRendering.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__SuspendRendering::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__SuspendRendering::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296e230;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SuspendRendering*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SuspendRendering*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__SuspendRendering::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SuspendRendering*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__SuspendRendering::Invoke(bool  bSuspend)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SuspendRendering*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bSuspend);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__SuspendRendering::BeginInvoke(bool  bSuspend, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SuspendRendering*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, bSuspend, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__SuspendRendering::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SuspendRendering*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__SuspendRendering* OVR::OpenVR::IVRCompositor__SuspendRendering::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__SuspendRendering*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__SuspendRendering::IVRCompositor__SuspendRendering()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296e23c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::*)(::OVR::OpenVR::EVREye, ::System::IntPtr, ::ByRef<::System::IntPtr>)>(&::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296e2c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::*)(::OVR::OpenVR::EVREye, ::System::IntPtr, ::ByRef<::System::IntPtr>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::BeginInvoke)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x296e2dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::*)(::ByRef<::System::IntPtr>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x296e3b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::Invoke(::OVR::OpenVR::EVREye  eEye, ::System::IntPtr  pD3D11DeviceOrResource, ::ByRef<::System::IntPtr>  ppD3D11ShaderResourceView)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::BeginInvoke(::OVR::OpenVR::EVREye  eEye, ::System::IntPtr  pD3D11DeviceOrResource, ::ByRef<::System::IntPtr>  ppD3D11ShaderResourceView, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::EndInvoke(::ByRef<::System::IntPtr>  ppD3D11ShaderResourceView, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, ppD3D11ShaderResourceView, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11* OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::IVRCompositor__GetMirrorTextureD3D11()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296e3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::*)(::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296e468;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x296e47c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296e500;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::Invoke(::System::IntPtr  pD3D11ShaderResourceView)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pD3D11ShaderResourceView);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::BeginInvoke(::System::IntPtr  pD3D11ShaderResourceView, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pD3D11ShaderResourceView, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11* OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::IVRCompositor__ReleaseMirrorTextureD3D11()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296e50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::*)(::OVR::OpenVR::EVREye, ::ByRef<uint32_t>, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296e598;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::*)(::OVR::OpenVR::EVREye, ::ByRef<uint32_t>, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x296e5ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::*)(::ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x296e698;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::Invoke(::OVR::OpenVR::EVREye  eEye, ::ByRef<uint32_t>  pglTextureId, ::System::IntPtr  pglSharedTextureHandle)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, eEye, pglTextureId, pglSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::BeginInvoke(::OVR::OpenVR::EVREye  eEye, ::ByRef<uint32_t>  pglTextureId, ::System::IntPtr  pglSharedTextureHandle, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, pglTextureId, pglSharedTextureHandle, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::EndInvoke(::ByRef<uint32_t>  pglTextureId, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, pglTextureId, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL* OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::IVRCompositor__GetMirrorTextureGL()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296e6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::*)(uint32_t, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296e750;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::*)(uint32_t, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x296e764;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296e81c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::Invoke(uint32_t  glTextureId, ::System::IntPtr  glSharedTextureHandle)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, glTextureId, glSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::BeginInvoke(uint32_t  glTextureId, ::System::IntPtr  glSharedTextureHandle, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, glTextureId, glSharedTextureHandle, callback, object);
}
inline bool OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture* OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::IVRCompositor__ReleaseSharedGLTexture()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296e844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::*)(::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296e8d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x296e8e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296e968;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::Invoke(::System::IntPtr  glSharedTextureHandle)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, glSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::BeginInvoke(::System::IntPtr  glSharedTextureHandle, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, glSharedTextureHandle, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess* OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::IVRCompositor__LockGLSharedTextureForAccess()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296e974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::*)(::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296ea00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x296ea14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296ea98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::Invoke(::System::IntPtr  glSharedTextureHandle)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, glSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::BeginInvoke(::System::IntPtr  glSharedTextureHandle, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, glSharedTextureHandle, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess* OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::IVRCompositor__UnlockGLSharedTextureForAccess()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x296eaa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::*)(::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296eb44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::*)(::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x296eb58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296ebec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::Invoke(::System::Text::StringBuilder*  pchValue, uint32_t  unBufferSize)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchValue, unBufferSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::BeginInvoke(::System::Text::StringBuilder*  pchValue, uint32_t  unBufferSize, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchValue, unBufferSize, callback, object);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired* OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::IVRCompositor__GetVulkanInstanceExtensionsRequired()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296ec14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::*)(::System::IntPtr, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296eca0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::*)(::System::IntPtr, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x296ecb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296ed74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::Invoke(::System::IntPtr  pPhysicalDevice, ::System::Text::StringBuilder*  pchValue, uint32_t  unBufferSize)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pPhysicalDevice, pchValue, unBufferSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::BeginInvoke(::System::IntPtr  pPhysicalDevice, ::System::Text::StringBuilder*  pchValue, uint32_t  unBufferSize, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pPhysicalDevice, pchValue, unBufferSize, callback, object);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired* OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::IVRCompositor__GetVulkanDeviceExtensionsRequired()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296ed9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::*)(::OVR::OpenVR::EVRCompositorTimingMode)>(&::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296ee28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::*)(::OVR::OpenVR::EVRCompositorTimingMode, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x296ee3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296eec0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::Invoke(::OVR::OpenVR::EVRCompositorTimingMode  eTimingMode)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eTimingMode);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::BeginInvoke(::OVR::OpenVR::EVRCompositorTimingMode  eTimingMode, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eTimingMode, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode* OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::IVRCompositor__SetExplicitTimingMode()   {
}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296eecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::*)()>(&::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x296ef54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296ef68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296ef88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData* OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::IVRCompositor__SubmitExplicitTimingData()   {
}
// Ctor Parameters [CppParam { name: "SetTrackingSpace", ty: "::OVR::OpenVR::IVRCompositor__SetTrackingSpace*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetTrackingSpace", ty: "::OVR::OpenVR::IVRCompositor__GetTrackingSpace*", modifiers: "", def_value: Some("{}") }, CppParam { name: "WaitGetPoses", ty: "::OVR::OpenVR::IVRCompositor__WaitGetPoses*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetLastPoses", ty: "::OVR::OpenVR::IVRCompositor__GetLastPoses*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetLastPoseForTrackedDeviceIndex", ty: "::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Submit", ty: "::OVR::OpenVR::IVRCompositor__Submit*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClearLastSubmittedFrame", ty: "::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*", modifiers: "", def_value: Some("{}") }, CppParam { name: "PostPresentHandoff", ty: "::OVR::OpenVR::IVRCompositor__PostPresentHandoff*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetFrameTiming", ty: "::OVR::OpenVR::IVRCompositor__GetFrameTiming*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetFrameTimings", ty: "::OVR::OpenVR::IVRCompositor__GetFrameTimings*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetFrameTimeRemaining", ty: "::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetCumulativeStats", ty: "::OVR::OpenVR::IVRCompositor__GetCumulativeStats*", modifiers: "", def_value: Some("{}") }, CppParam { name: "FadeToColor", ty: "::OVR::OpenVR::IVRCompositor__FadeToColor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetCurrentFadeColor", ty: "::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "FadeGrid", ty: "::OVR::OpenVR::IVRCompositor__FadeGrid*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetCurrentGridAlpha", ty: "::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetSkyboxOverride", ty: "::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClearSkyboxOverride", ty: "::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CompositorBringToFront", ty: "::OVR::OpenVR::IVRCompositor__CompositorBringToFront*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CompositorGoToBack", ty: "::OVR::OpenVR::IVRCompositor__CompositorGoToBack*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CompositorQuit", ty: "::OVR::OpenVR::IVRCompositor__CompositorQuit*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsFullscreen", ty: "::OVR::OpenVR::IVRCompositor__IsFullscreen*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetCurrentSceneFocusProcess", ty: "::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetLastFrameRenderer", ty: "::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CanRenderScene", ty: "::OVR::OpenVR::IVRCompositor__CanRenderScene*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShowMirrorWindow", ty: "::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*", modifiers: "", def_value: Some("{}") }, CppParam { name: "HideMirrorWindow", ty: "::OVR::OpenVR::IVRCompositor__HideMirrorWindow*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsMirrorWindowVisible", ty: "::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CompositorDumpImages", ty: "::OVR::OpenVR::IVRCompositor__CompositorDumpImages*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShouldAppRenderWithLowResources", ty: "::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ForceInterleavedReprojectionOn", ty: "::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ForceReconnectProcess", ty: "::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SuspendRendering", ty: "::OVR::OpenVR::IVRCompositor__SuspendRendering*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetMirrorTextureD3D11", ty: "::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReleaseMirrorTextureD3D11", ty: "::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetMirrorTextureGL", ty: "::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReleaseSharedGLTexture", ty: "::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*", modifiers: "", def_value: Some("{}") }, CppParam { name: "LockGLSharedTextureForAccess", ty: "::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*", modifiers: "", def_value: Some("{}") }, CppParam { name: "UnlockGLSharedTextureForAccess", ty: "::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetVulkanInstanceExtensionsRequired", ty: "::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetVulkanDeviceExtensionsRequired", ty: "::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetExplicitTimingMode", ty: "::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SubmitExplicitTimingData", ty: "::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRCompositor::IVRCompositor(::OVR::OpenVR::IVRCompositor__SetTrackingSpace*  SetTrackingSpace, ::OVR::OpenVR::IVRCompositor__GetTrackingSpace*  GetTrackingSpace, ::OVR::OpenVR::IVRCompositor__WaitGetPoses*  WaitGetPoses, ::OVR::OpenVR::IVRCompositor__GetLastPoses*  GetLastPoses, ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*  GetLastPoseForTrackedDeviceIndex, ::OVR::OpenVR::IVRCompositor__Submit*  Submit, ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*  ClearLastSubmittedFrame, ::OVR::OpenVR::IVRCompositor__PostPresentHandoff*  PostPresentHandoff, ::OVR::OpenVR::IVRCompositor__GetFrameTiming*  GetFrameTiming, ::OVR::OpenVR::IVRCompositor__GetFrameTimings*  GetFrameTimings, ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*  GetFrameTimeRemaining, ::OVR::OpenVR::IVRCompositor__GetCumulativeStats*  GetCumulativeStats, ::OVR::OpenVR::IVRCompositor__FadeToColor*  FadeToColor, ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*  GetCurrentFadeColor, ::OVR::OpenVR::IVRCompositor__FadeGrid*  FadeGrid, ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*  GetCurrentGridAlpha, ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*  SetSkyboxOverride, ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*  ClearSkyboxOverride, ::OVR::OpenVR::IVRCompositor__CompositorBringToFront*  CompositorBringToFront, ::OVR::OpenVR::IVRCompositor__CompositorGoToBack*  CompositorGoToBack, ::OVR::OpenVR::IVRCompositor__CompositorQuit*  CompositorQuit, ::OVR::OpenVR::IVRCompositor__IsFullscreen*  IsFullscreen, ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*  GetCurrentSceneFocusProcess, ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*  GetLastFrameRenderer, ::OVR::OpenVR::IVRCompositor__CanRenderScene*  CanRenderScene, ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*  ShowMirrorWindow, ::OVR::OpenVR::IVRCompositor__HideMirrorWindow*  HideMirrorWindow, ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*  IsMirrorWindowVisible, ::OVR::OpenVR::IVRCompositor__CompositorDumpImages*  CompositorDumpImages, ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*  ShouldAppRenderWithLowResources, ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*  ForceInterleavedReprojectionOn, ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*  ForceReconnectProcess, ::OVR::OpenVR::IVRCompositor__SuspendRendering*  SuspendRendering, ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*  GetMirrorTextureD3D11, ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*  ReleaseMirrorTextureD3D11, ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*  GetMirrorTextureGL, ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*  ReleaseSharedGLTexture, ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*  LockGLSharedTextureForAccess, ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*  UnlockGLSharedTextureForAccess, ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*  GetVulkanInstanceExtensionsRequired, ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*  GetVulkanDeviceExtensionsRequired, ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*  SetExplicitTimingMode, ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*  SubmitExplicitTimingData) noexcept  {
this->SetTrackingSpace = SetTrackingSpace;
this->GetTrackingSpace = GetTrackingSpace;
this->WaitGetPoses = WaitGetPoses;
this->GetLastPoses = GetLastPoses;
this->GetLastPoseForTrackedDeviceIndex = GetLastPoseForTrackedDeviceIndex;
this->Submit = Submit;
this->ClearLastSubmittedFrame = ClearLastSubmittedFrame;
this->PostPresentHandoff = PostPresentHandoff;
this->GetFrameTiming = GetFrameTiming;
this->GetFrameTimings = GetFrameTimings;
this->GetFrameTimeRemaining = GetFrameTimeRemaining;
this->GetCumulativeStats = GetCumulativeStats;
this->FadeToColor = FadeToColor;
this->GetCurrentFadeColor = GetCurrentFadeColor;
this->FadeGrid = FadeGrid;
this->GetCurrentGridAlpha = GetCurrentGridAlpha;
this->SetSkyboxOverride = SetSkyboxOverride;
this->ClearSkyboxOverride = ClearSkyboxOverride;
this->CompositorBringToFront = CompositorBringToFront;
this->CompositorGoToBack = CompositorGoToBack;
this->CompositorQuit = CompositorQuit;
this->IsFullscreen = IsFullscreen;
this->GetCurrentSceneFocusProcess = GetCurrentSceneFocusProcess;
this->GetLastFrameRenderer = GetLastFrameRenderer;
this->CanRenderScene = CanRenderScene;
this->ShowMirrorWindow = ShowMirrorWindow;
this->HideMirrorWindow = HideMirrorWindow;
this->IsMirrorWindowVisible = IsMirrorWindowVisible;
this->CompositorDumpImages = CompositorDumpImages;
this->ShouldAppRenderWithLowResources = ShouldAppRenderWithLowResources;
this->ForceInterleavedReprojectionOn = ForceInterleavedReprojectionOn;
this->ForceReconnectProcess = ForceReconnectProcess;
this->SuspendRendering = SuspendRendering;
this->GetMirrorTextureD3D11 = GetMirrorTextureD3D11;
this->ReleaseMirrorTextureD3D11 = ReleaseMirrorTextureD3D11;
this->GetMirrorTextureGL = GetMirrorTextureGL;
this->ReleaseSharedGLTexture = ReleaseSharedGLTexture;
this->LockGLSharedTextureForAccess = LockGLSharedTextureForAccess;
this->UnlockGLSharedTextureForAccess = UnlockGLSharedTextureForAccess;
this->GetVulkanInstanceExtensionsRequired = GetVulkanInstanceExtensionsRequired;
this->GetVulkanDeviceExtensionsRequired = GetVulkanDeviceExtensionsRequired;
this->SetExplicitTimingMode = SetExplicitTimingMode;
this->SubmitExplicitTimingData = SubmitExplicitTimingData;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor::IVRCompositor()   {
}
