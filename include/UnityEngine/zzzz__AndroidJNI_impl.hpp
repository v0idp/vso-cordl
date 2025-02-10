#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidJNI_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__JNINativeMethod_def.hpp"
#include "UnityEngine/zzzz__jvalue_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetJavaVM
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::AndroidJNI::GetJavaVM)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f43a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetJavaVM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.AttachCurrentThread
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::AndroidJNI::AttachCurrentThread)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f43a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "AttachCurrentThread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.DetachCurrentThread
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::AndroidJNI::DetachCurrentThread)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f43a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "DetachCurrentThread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetVersion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::AndroidJNI::GetVersion)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f43ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FindClass
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::StringW)>(&::UnityEngine::AndroidJNI::FindClass)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f43aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FindClass",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromReflectedMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromReflectedMethod)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f43b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromReflectedMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromReflectedField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromReflectedField)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f43b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromReflectedField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToReflectedMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, bool)>(&::UnityEngine::AndroidJNI::ToReflectedMethod)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f43ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToReflectedMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToReflectedField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, bool)>(&::UnityEngine::AndroidJNI::ToReflectedField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f43bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToReflectedField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetSuperclass
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetSuperclass)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f43c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetSuperclass",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.IsAssignableFrom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::IsAssignableFrom)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f43c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "IsAssignableFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.Throw
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::Throw)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f43cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "Throw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ThrowNew
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::UnityEngine::AndroidJNI::ThrowNew)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f43d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ThrowNew",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ExceptionOccurred
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::AndroidJNI::ExceptionOccurred)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f43d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ExceptionOccurred",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ExceptionDescribe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::AndroidJNI::ExceptionDescribe)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f43d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ExceptionDescribe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ExceptionClear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::AndroidJNI::ExceptionClear)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f43d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ExceptionClear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FatalError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::AndroidJNI::FatalError)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f43dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FatalError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.PushLocalFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::AndroidJNI::PushLocalFrame)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f43dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "PushLocalFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.PopLocalFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::PopLocalFrame)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f43e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "PopLocalFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewGlobalRef
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::NewGlobalRef)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f43e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewGlobalRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.DeleteGlobalRef
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::DeleteGlobalRef)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f43eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "DeleteGlobalRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.QueueDeleteGlobalRef
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::QueueDeleteGlobalRef)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f43eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "QueueDeleteGlobalRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetQueueGlobalRefsCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::UnityEngine::AndroidJNI::GetQueueGlobalRefsCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f43f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetQueueGlobalRefsCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewWeakGlobalRef
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::NewWeakGlobalRef)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f43f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewWeakGlobalRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.DeleteWeakGlobalRef
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::DeleteWeakGlobalRef)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f43f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "DeleteWeakGlobalRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewLocalRef
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::NewLocalRef)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f43fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewLocalRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.DeleteLocalRef
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::DeleteLocalRef)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f44004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "DeleteLocalRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.IsSameObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::IsSameObject)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f44040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "IsSameObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.EnsureLocalCapacity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::AndroidJNI::EnsureLocalCapacity)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f44084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "EnsureLocalCapacity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.AllocObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::AllocObject)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f440c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "AllocObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::NewObject)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f440fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::NewObject)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f44164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewObjectA
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::NewObjectA)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f441fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewObjectA",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetObjectClass
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetObjectClass)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f44250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetObjectClass",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.IsInstanceOf
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::IsInstanceOf)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f4428c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "IsInstanceOf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetMethodID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNI::GetMethodID)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f442d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetMethodID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetFieldID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNI::GetFieldID)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f44324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetFieldID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticMethodID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNI::GetStaticMethodID)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f44378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticMethodID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticFieldID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNI::GetStaticFieldID)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f443cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticFieldID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::StringW)>(&::UnityEngine::AndroidJNI::NewString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f44420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewStringFromStr
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::StringW)>(&::UnityEngine::AndroidJNI::NewStringFromStr)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f4445c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewStringFromStr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::ArrayW<char16_t,::Array<char16_t>*>)>(&::UnityEngine::AndroidJNI::NewString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f44498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewStringUTF
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::StringW)>(&::UnityEngine::AndroidJNI::NewStringUTF)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f444d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewStringUTF",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringChars
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStringChars)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f44510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStringChars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStringLength)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f4454c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStringLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringUTFLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStringUTFLength)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f44588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStringUTFLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringUTFChars
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStringUTFChars)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f445c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStringUTFChars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStringMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallStringMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f44600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStringMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStringMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStringMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f44668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStringMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStringMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStringMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f44700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStringMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallObjectMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallObjectMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f44754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallObjectMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallObjectMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallObjectMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f447bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallObjectMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallObjectMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallObjectMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f44854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallObjectMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallIntMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallIntMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f448a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallIntMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallIntMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallIntMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f44910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallIntMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallIntMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallIntMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f449a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallIntMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallBooleanMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallBooleanMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f449fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallBooleanMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallBooleanMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallBooleanMethod)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f44a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallBooleanMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallBooleanMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallBooleanMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f44b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallBooleanMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallShortMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallShortMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f44b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallShortMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallShortMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallShortMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f44bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallShortMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallShortMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallShortMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f44c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallShortMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallByteMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallByteMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f44ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallByteMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallSByteMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallSByteMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f44cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallSByteMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallSByteMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallSByteMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f44d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallSByteMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallSByteMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallSByteMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f44dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallSByteMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallCharMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallCharMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f44e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallCharMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallCharMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallCharMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f44e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallCharMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallCharMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallCharMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f44f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallCharMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallFloatMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallFloatMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f44f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallFloatMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallFloatMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallFloatMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f44fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallFloatMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallFloatMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallFloatMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f45054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallFloatMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallDoubleMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallDoubleMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f450a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallDoubleMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallDoubleMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallDoubleMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f45110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallDoubleMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallDoubleMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallDoubleMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f451a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallDoubleMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallLongMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallLongMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f451fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallLongMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallLongMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallLongMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f45264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallLongMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallLongMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallLongMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f452fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallLongMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallVoidMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallVoidMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f45350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallVoidMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallVoidMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallVoidMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f453b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallVoidMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallVoidMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallVoidMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f45450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallVoidMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStringField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f454a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStringField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetObjectField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetObjectField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f454e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetObjectField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetBooleanField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetBooleanField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f4552c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetBooleanField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetByteField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetByteField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f45570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetSByteField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetSByteField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f455b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetSByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetCharField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetCharField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f455f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetCharField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetShortField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetShortField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f4563c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetShortField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetIntField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetIntField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f45680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetIntField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetLongField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetLongField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f456c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetLongField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetFloatField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetFloatField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f45708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetFloatField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetDoubleField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetDoubleField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f4574c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetDoubleField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStringField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::StringW)>(&::UnityEngine::AndroidJNI::SetStringField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f45790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStringField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetObjectField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::SetObjectField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f457e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetObjectField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetBooleanField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, bool)>(&::UnityEngine::AndroidJNI::SetBooleanField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f45838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetBooleanField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetByteField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, uint8_t)>(&::UnityEngine::AndroidJNI::SetByteField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f4588c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetSByteField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int8_t)>(&::UnityEngine::AndroidJNI::SetSByteField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f458e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetSByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetCharField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, char16_t)>(&::UnityEngine::AndroidJNI::SetCharField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f45934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetCharField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetShortField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int16_t)>(&::UnityEngine::AndroidJNI::SetShortField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f45988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetShortField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetIntField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::SetIntField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f459dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetIntField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetLongField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int64_t)>(&::UnityEngine::AndroidJNI::SetLongField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f45a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetLongField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetFloatField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, float_t)>(&::UnityEngine::AndroidJNI::SetFloatField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f45a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetFloatField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetDoubleField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, double_t)>(&::UnityEngine::AndroidJNI::SetDoubleField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f45ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetDoubleField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticStringMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallStaticStringMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f45b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticStringMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticStringMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticStringMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f45b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticStringMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticStringMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticStringMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f45c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticStringMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticObjectMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallStaticObjectMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f45c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticObjectMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticObjectMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticObjectMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f45ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticObjectMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticObjectMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticObjectMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f45d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticObjectMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticIntMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallStaticIntMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f45dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticIntMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticIntMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticIntMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f45e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticIntMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticIntMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticIntMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f45ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticIntMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticBooleanMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallStaticBooleanMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f45f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticBooleanMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticBooleanMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticBooleanMethod)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f45f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticBooleanMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticBooleanMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticBooleanMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f4602c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticBooleanMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticShortMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallStaticShortMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f46080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticShortMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticShortMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticShortMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f460e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticShortMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticShortMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticShortMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f46180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticShortMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticByteMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallStaticByteMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f461d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticByteMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticSByteMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallStaticSByteMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f461d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticSByteMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticSByteMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticSByteMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f46240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticSByteMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticSByteMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticSByteMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f462d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticSByteMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticCharMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallStaticCharMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f4632c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticCharMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticCharMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticCharMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f46394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticCharMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticCharMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticCharMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f4642c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticCharMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticFloatMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallStaticFloatMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f46480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticFloatMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticFloatMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticFloatMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f464e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticFloatMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticFloatMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticFloatMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f46580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticFloatMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticDoubleMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallStaticDoubleMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f465d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticDoubleMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticDoubleMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticDoubleMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f4663c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticDoubleMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticDoubleMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticDoubleMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f466d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticDoubleMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticLongMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallStaticLongMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f46728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticLongMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticLongMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticLongMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f46790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticLongMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticLongMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticLongMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f46828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticLongMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticVoidMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>)>(&::UnityEngine::AndroidJNI::CallStaticVoidMethod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f4687c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticVoidMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticVoidMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticVoidMethod)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f468e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticVoidMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticVoidMethodUnsafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::cordl_internals::Ptr<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticVoidMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f4697c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticVoidMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticStringField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticStringField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f469d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticStringField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticObjectField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticObjectField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f46a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticObjectField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticBooleanField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticBooleanField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f46a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticBooleanField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticByteField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticByteField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f46a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticSByteField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticSByteField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f46ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticSByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticCharField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticCharField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f46b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticCharField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticShortField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticShortField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f46b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticShortField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticIntField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticIntField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f46bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticIntField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticLongField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticLongField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f46bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticLongField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticFloatField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticFloatField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f46c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticFloatField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticDoubleField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticDoubleField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f46c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticDoubleField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticStringField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::StringW)>(&::UnityEngine::AndroidJNI::SetStaticStringField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f46cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticStringField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticObjectField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::SetStaticObjectField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f46d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticObjectField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticBooleanField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, bool)>(&::UnityEngine::AndroidJNI::SetStaticBooleanField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f46d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticBooleanField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticByteField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, uint8_t)>(&::UnityEngine::AndroidJNI::SetStaticByteField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f46db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticSByteField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int8_t)>(&::UnityEngine::AndroidJNI::SetStaticSByteField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f46e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticSByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticCharField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, char16_t)>(&::UnityEngine::AndroidJNI::SetStaticCharField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f46e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticCharField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticShortField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int16_t)>(&::UnityEngine::AndroidJNI::SetStaticShortField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f46eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticShortField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticIntField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::SetStaticIntField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f46f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticIntField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticLongField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int64_t)>(&::UnityEngine::AndroidJNI::SetStaticLongField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f46f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticLongField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticFloatField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, float_t)>(&::UnityEngine::AndroidJNI::SetStaticFloatField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f46fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticFloatField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticDoubleField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, double_t)>(&::UnityEngine::AndroidJNI::SetStaticDoubleField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f47004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticDoubleField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToBooleanArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::ArrayW<bool,::Array<bool>*>)>(&::UnityEngine::AndroidJNI::ToBooleanArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f47058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToBooleanArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool,::Array<bool>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToByteArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::UnityEngine::AndroidJNI::ToByteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f47094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToByteArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToSByteArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::ArrayW<int8_t,::Array<int8_t>*>)>(&::UnityEngine::AndroidJNI::ToSByteArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f470d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToSByteArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int8_t,::Array<int8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToSByteArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::cordl_internals::Ptr<int8_t>, int32_t)>(&::UnityEngine::AndroidJNI::ToSByteArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f47124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToSByteArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToCharArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::ArrayW<char16_t,::Array<char16_t>*>)>(&::UnityEngine::AndroidJNI::ToCharArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f47168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToCharArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToCharArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::cordl_internals::Ptr<char16_t>, int32_t)>(&::UnityEngine::AndroidJNI::ToCharArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f471bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToCharArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToShortArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::ArrayW<int16_t,::Array<int16_t>*>)>(&::UnityEngine::AndroidJNI::ToShortArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f47200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToShortArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t,::Array<int16_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToShortArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::cordl_internals::Ptr<int16_t>, int32_t)>(&::UnityEngine::AndroidJNI::ToShortArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f47254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToShortArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToIntArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::ArrayW<int32_t,::Array<int32_t>*>)>(&::UnityEngine::AndroidJNI::ToIntArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f47298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToIntArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToIntArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::cordl_internals::Ptr<int32_t>, int32_t)>(&::UnityEngine::AndroidJNI::ToIntArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f472ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToIntArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToLongArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::ArrayW<int64_t,::Array<int64_t>*>)>(&::UnityEngine::AndroidJNI::ToLongArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f47330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToLongArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int64_t,::Array<int64_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToLongArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::cordl_internals::Ptr<int64_t>, int32_t)>(&::UnityEngine::AndroidJNI::ToLongArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f47384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToLongArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToFloatArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::ArrayW<float_t,::Array<float_t>*>)>(&::UnityEngine::AndroidJNI::ToFloatArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f473c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToFloatArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToFloatArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::cordl_internals::Ptr<float_t>, int32_t)>(&::UnityEngine::AndroidJNI::ToFloatArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f4741c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToFloatArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToDoubleArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::ArrayW<double_t,::Array<double_t>*>)>(&::UnityEngine::AndroidJNI::ToDoubleArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f47460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToDoubleArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<double_t,::Array<double_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToDoubleArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::cordl_internals::Ptr<double_t>, int32_t)>(&::UnityEngine::AndroidJNI::ToDoubleArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f474b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToDoubleArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<double_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToObjectArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::cordl_internals::Ptr<::System::IntPtr>, int32_t, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::ToObjectArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f474f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToObjectArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::System::IntPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToObjectArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::ToObjectArray)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f4754c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToObjectArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToObjectArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>)>(&::UnityEngine::AndroidJNI::ToObjectArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f475b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToObjectArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromBooleanArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool,::Array<bool>*> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromBooleanArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f475b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromBooleanArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromByteArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromByteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f475f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromByteArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromSByteArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int8_t,::Array<int8_t>*> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromSByteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f47630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromSByteArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromCharArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t,::Array<char16_t>*> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromCharArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f4766c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromCharArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromShortArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int16_t,::Array<int16_t>*> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromShortArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f476a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromShortArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromIntArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t,::Array<int32_t>*> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromIntArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f476e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromIntArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromLongArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int64_t,::Array<int64_t>*> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromLongArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f47720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromLongArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromFloatArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t,::Array<float_t>*> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromFloatArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f4775c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromFloatArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromDoubleArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<double_t,::Array<double_t>*> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromDoubleArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f47798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromDoubleArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromObjectArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromObjectArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f477d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromObjectArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetArrayLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetArrayLength)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f47810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetArrayLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewBooleanArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewBooleanArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f4784c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewBooleanArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewByteArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewByteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f47888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewByteArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewSByteArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewSByteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f478c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewSByteArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewCharArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewCharArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f47900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewCharArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewShortArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewShortArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f4793c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewShortArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewIntArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewIntArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f47978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewIntArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewLongArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewLongArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f479b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewLongArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewFloatArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewFloatArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f479f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewFloatArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewDoubleArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewDoubleArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f47a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewDoubleArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewObjectArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(int32_t, ::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::NewObjectArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f47a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewObjectArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetBooleanArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetBooleanArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f47abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetBooleanArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetByteArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetByteArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f47b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetByteArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetSByteArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetSByteArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f47b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetSByteArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetCharArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetCharArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f47b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetCharArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetShortArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetShortArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f47bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetShortArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetIntArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetIntArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f47c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetIntArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetLongArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetLongArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f47c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetLongArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetFloatArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetFloatArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f47c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetFloatArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetDoubleArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetDoubleArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f47cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetDoubleArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetObjectArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetObjectArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f47d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetObjectArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetBooleanArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, uint8_t)>(&::UnityEngine::AndroidJNI::SetBooleanArrayElement)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f47d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetBooleanArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetBooleanArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, bool)>(&::UnityEngine::AndroidJNI::SetBooleanArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f47dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetBooleanArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetByteArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, int8_t)>(&::UnityEngine::AndroidJNI::SetByteArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f47e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetByteArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetSByteArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, int8_t)>(&::UnityEngine::AndroidJNI::SetSByteArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f47e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetSByteArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetCharArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, char16_t)>(&::UnityEngine::AndroidJNI::SetCharArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f47eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetCharArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetShortArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, int16_t)>(&::UnityEngine::AndroidJNI::SetShortArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f47f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetShortArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetIntArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::AndroidJNI::SetIntArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f47f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetIntArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetLongArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, int64_t)>(&::UnityEngine::AndroidJNI::SetLongArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f47fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetLongArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetFloatArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, float_t)>(&::UnityEngine::AndroidJNI::SetFloatArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f48008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetFloatArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetDoubleArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, double_t)>(&::UnityEngine::AndroidJNI::SetDoubleArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f4805c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetDoubleArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetObjectArrayElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::SetObjectArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f480b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetObjectArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewDirectByteBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::cordl_internals::Ptr<uint8_t>, int64_t)>(&::UnityEngine::AndroidJNI::NewDirectByteBuffer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f48104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewDirectByteBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewDirectByteBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::Unity::Collections::NativeArray_1<uint8_t>)>(&::UnityEngine::AndroidJNI::NewDirectByteBuffer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f48148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewDirectByteBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewDirectByteBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::Unity::Collections::NativeArray_1<int8_t>)>(&::UnityEngine::AndroidJNI::NewDirectByteBuffer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f481a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewDirectByteBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int8_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetDirectBufferAddress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<int8_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetDirectBufferAddress)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f481f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetDirectBufferAddress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetDirectBufferCapacity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetDirectBufferCapacity)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f48234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetDirectBufferCapacity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetDirectByteBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetDirectByteBuffer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2f48270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetDirectByteBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetDirectSByteBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<int8_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetDirectSByteBuffer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2f482b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetDirectSByteBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.RegisterNatives
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<::UnityEngine::JNINativeMethod,::Array<::UnityEngine::JNINativeMethod>*>)>(&::UnityEngine::AndroidJNI::RegisterNatives)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2f48300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "RegisterNatives",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::JNINativeMethod,::Array<::UnityEngine::JNINativeMethod>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.RegisterNativesAllocate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::RegisterNativesAllocate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f48490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "RegisterNativesAllocate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.RegisterNativesSet
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, ::StringW, ::StringW, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::RegisterNativesSet)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f484cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "RegisterNativesSet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.RegisterNativesAndFree
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::RegisterNativesAndFree)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f48538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "RegisterNativesAndFree",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.UnregisterNatives
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::UnregisterNatives)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f4858c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "UnregisterNatives",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::AndroidJNI::GetJavaVM()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetJavaVM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::AndroidJNI::AttachCurrentThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "AttachCurrentThread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::AndroidJNI::DetachCurrentThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "DetachCurrentThread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::AndroidJNI::GetVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::FindClass(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FindClass",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, name);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::FromReflectedMethod(::System::IntPtr  refMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromReflectedMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, refMethod);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::FromReflectedField(::System::IntPtr  refField)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromReflectedField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, refField);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToReflectedMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, bool  isStatic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToReflectedMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz, methodID, isStatic);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToReflectedField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, bool  isStatic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToReflectedField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz, fieldID, isStatic);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetSuperclass(::System::IntPtr  clazz)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetSuperclass",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz);
}
inline bool UnityEngine::AndroidJNI::IsAssignableFrom(::System::IntPtr  clazz1, ::System::IntPtr  clazz2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "IsAssignableFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, clazz1, clazz2);
}
inline int32_t UnityEngine::AndroidJNI::Throw(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "Throw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obj);
}
inline int32_t UnityEngine::AndroidJNI::ThrowNew(::System::IntPtr  clazz, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ThrowNew",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, clazz, message);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ExceptionOccurred()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ExceptionOccurred",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline void UnityEngine::AndroidJNI::ExceptionDescribe()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ExceptionDescribe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::AndroidJNI::ExceptionClear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ExceptionClear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::AndroidJNI::FatalError(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FatalError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline int32_t UnityEngine::AndroidJNI::PushLocalFrame(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "PushLocalFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, capacity);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::PopLocalFrame(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "PopLocalFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, ptr);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewGlobalRef(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewGlobalRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::AndroidJNI::DeleteGlobalRef(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "DeleteGlobalRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::AndroidJNI::QueueDeleteGlobalRef(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "QueueDeleteGlobalRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
inline uint32_t UnityEngine::AndroidJNI::GetQueueGlobalRefsCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetQueueGlobalRefsCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewWeakGlobalRef(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewWeakGlobalRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::AndroidJNI::DeleteWeakGlobalRef(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "DeleteWeakGlobalRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewLocalRef(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewLocalRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::AndroidJNI::DeleteLocalRef(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "DeleteLocalRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
inline bool UnityEngine::AndroidJNI::IsSameObject(::System::IntPtr  obj1, ::System::IntPtr  obj2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "IsSameObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj1, obj2);
}
inline int32_t UnityEngine::AndroidJNI::EnsureLocalCapacity(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "EnsureLocalCapacity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, capacity);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::AllocObject(::System::IntPtr  clazz)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "AllocObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewObject(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewObject(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewObjectA(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewObjectA",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetObjectClass(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetObjectClass",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, obj);
}
inline bool UnityEngine::AndroidJNI::IsInstanceOf(::System::IntPtr  obj, ::System::IntPtr  clazz)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "IsInstanceOf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj, clazz);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetMethodID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetMethodID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetFieldID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetFieldID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetStaticMethodID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticMethodID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetStaticFieldID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticFieldID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewString(::StringW  chars)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, chars);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewStringFromStr(::StringW  chars)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewStringFromStr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, chars);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewString(::ArrayW<char16_t,::Array<char16_t>*>  chars)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, chars);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewStringUTF(::StringW  bytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewStringUTF",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, bytes);
}
inline ::StringW UnityEngine::AndroidJNI::GetStringChars(::System::IntPtr  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStringChars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str);
}
inline int32_t UnityEngine::AndroidJNI::GetStringLength(::System::IntPtr  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStringLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, str);
}
inline int32_t UnityEngine::AndroidJNI::GetStringUTFLength(::System::IntPtr  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStringUTFLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, str);
}
inline ::StringW UnityEngine::AndroidJNI::GetStringUTFChars(::System::IntPtr  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStringUTFChars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str);
}
inline ::StringW UnityEngine::AndroidJNI::CallStringMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStringMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::CallStringMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStringMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::CallStringMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStringMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallObjectMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallObjectMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallObjectMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallObjectMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallObjectMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallObjectMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallIntMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallIntMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallIntMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallIntMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallIntMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallIntMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallBooleanMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallBooleanMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallBooleanMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallBooleanMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallBooleanMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallBooleanMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallShortMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallShortMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallShortMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallShortMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallShortMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallShortMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline uint8_t UnityEngine::AndroidJNI::CallByteMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallByteMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallSByteMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallSByteMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallSByteMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallSByteMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallSByteMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallSByteMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallCharMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallCharMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallCharMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallCharMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallCharMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallCharMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallFloatMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallFloatMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallFloatMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallFloatMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallFloatMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallFloatMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallDoubleMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallDoubleMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallDoubleMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallDoubleMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallDoubleMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallDoubleMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallLongMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallLongMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallLongMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallLongMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallLongMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallLongMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline void UnityEngine::AndroidJNI::CallVoidMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallVoidMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline void UnityEngine::AndroidJNI::CallVoidMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallVoidMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline void UnityEngine::AndroidJNI::CallVoidMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallVoidMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::GetStringField(::System::IntPtr  obj, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStringField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, obj, fieldID);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetObjectField(::System::IntPtr  obj, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetObjectField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, obj, fieldID);
}
inline bool UnityEngine::AndroidJNI::GetBooleanField(::System::IntPtr  obj, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetBooleanField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj, fieldID);
}
inline uint8_t UnityEngine::AndroidJNI::GetByteField(::System::IntPtr  obj, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, obj, fieldID);
}
inline int8_t UnityEngine::AndroidJNI::GetSByteField(::System::IntPtr  obj, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetSByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, obj, fieldID);
}
inline char16_t UnityEngine::AndroidJNI::GetCharField(::System::IntPtr  obj, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetCharField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, obj, fieldID);
}
inline int16_t UnityEngine::AndroidJNI::GetShortField(::System::IntPtr  obj, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetShortField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, obj, fieldID);
}
inline int32_t UnityEngine::AndroidJNI::GetIntField(::System::IntPtr  obj, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetIntField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obj, fieldID);
}
inline int64_t UnityEngine::AndroidJNI::GetLongField(::System::IntPtr  obj, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetLongField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, obj, fieldID);
}
inline float_t UnityEngine::AndroidJNI::GetFloatField(::System::IntPtr  obj, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetFloatField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, obj, fieldID);
}
inline double_t UnityEngine::AndroidJNI::GetDoubleField(::System::IntPtr  obj, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetDoubleField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, obj, fieldID);
}
inline void UnityEngine::AndroidJNI::SetStringField(::System::IntPtr  obj, ::System::IntPtr  fieldID, ::StringW  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStringField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetObjectField(::System::IntPtr  obj, ::System::IntPtr  fieldID, ::System::IntPtr  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetObjectField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetBooleanField(::System::IntPtr  obj, ::System::IntPtr  fieldID, bool  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetBooleanField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetByteField(::System::IntPtr  obj, ::System::IntPtr  fieldID, uint8_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetSByteField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int8_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetSByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetCharField(::System::IntPtr  obj, ::System::IntPtr  fieldID, char16_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetCharField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetShortField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int16_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetShortField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetIntField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetIntField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetLongField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int64_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetLongField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetFloatField(::System::IntPtr  obj, ::System::IntPtr  fieldID, float_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetFloatField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetDoubleField(::System::IntPtr  obj, ::System::IntPtr  fieldID, double_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetDoubleField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, fieldID, val);
}
inline ::StringW UnityEngine::AndroidJNI::CallStaticStringMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticStringMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::CallStaticStringMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticStringMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::CallStaticStringMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticStringMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallStaticObjectMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticObjectMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallStaticObjectMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticObjectMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallStaticObjectMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticObjectMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallStaticIntMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticIntMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallStaticIntMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticIntMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallStaticIntMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticIntMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallStaticBooleanMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticBooleanMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallStaticBooleanMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticBooleanMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallStaticBooleanMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticBooleanMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallStaticShortMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticShortMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallStaticShortMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticShortMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallStaticShortMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticShortMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline uint8_t UnityEngine::AndroidJNI::CallStaticByteMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticByteMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallStaticSByteMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticSByteMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallStaticSByteMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticSByteMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallStaticSByteMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticSByteMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallStaticCharMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticCharMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallStaticCharMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticCharMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallStaticCharMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticCharMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallStaticFloatMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticFloatMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallStaticFloatMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticFloatMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallStaticFloatMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticFloatMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallStaticDoubleMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticDoubleMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallStaticDoubleMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticDoubleMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallStaticDoubleMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticDoubleMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallStaticLongMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticLongMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallStaticLongMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticLongMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallStaticLongMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticLongMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline void UnityEngine::AndroidJNI::CallStaticVoidMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticVoidMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline void UnityEngine::AndroidJNI::CallStaticVoidMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticVoidMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline void UnityEngine::AndroidJNI::CallStaticVoidMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "CallStaticVoidMethodUnsafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::jvalue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::GetStaticStringField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticStringField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, clazz, fieldID);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetStaticObjectField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticObjectField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz, fieldID);
}
inline bool UnityEngine::AndroidJNI::GetStaticBooleanField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticBooleanField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, clazz, fieldID);
}
inline uint8_t UnityEngine::AndroidJNI::GetStaticByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, clazz, fieldID);
}
inline int8_t UnityEngine::AndroidJNI::GetStaticSByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticSByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, clazz, fieldID);
}
inline char16_t UnityEngine::AndroidJNI::GetStaticCharField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticCharField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, clazz, fieldID);
}
inline int16_t UnityEngine::AndroidJNI::GetStaticShortField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticShortField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, clazz, fieldID);
}
inline int32_t UnityEngine::AndroidJNI::GetStaticIntField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticIntField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, clazz, fieldID);
}
inline int64_t UnityEngine::AndroidJNI::GetStaticLongField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticLongField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, clazz, fieldID);
}
inline float_t UnityEngine::AndroidJNI::GetStaticFloatField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticFloatField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, clazz, fieldID);
}
inline double_t UnityEngine::AndroidJNI::GetStaticDoubleField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetStaticDoubleField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, clazz, fieldID);
}
inline void UnityEngine::AndroidJNI::SetStaticStringField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, ::StringW  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticStringField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticObjectField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, ::System::IntPtr  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticObjectField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticBooleanField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, bool  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticBooleanField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, uint8_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticSByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int8_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticSByteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticCharField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, char16_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticCharField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticShortField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int16_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticShortField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticIntField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticIntField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticLongField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int64_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticLongField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticFloatField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, float_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticFloatField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticDoubleField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, double_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetStaticDoubleField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToBooleanArray(::ArrayW<bool,::Array<bool>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToBooleanArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool,::Array<bool>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToByteArray(::ArrayW<uint8_t,::Array<uint8_t>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToByteArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToSByteArray(::ArrayW<int8_t,::Array<int8_t>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToSByteArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int8_t,::Array<int8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToSByteArray(::cordl_internals::Ptr<int8_t>  array, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToSByteArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToCharArray(::ArrayW<char16_t,::Array<char16_t>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToCharArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToCharArray(::cordl_internals::Ptr<char16_t>  array, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToCharArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToShortArray(::ArrayW<int16_t,::Array<int16_t>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToShortArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t,::Array<int16_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToShortArray(::cordl_internals::Ptr<int16_t>  array, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToShortArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToIntArray(::ArrayW<int32_t,::Array<int32_t>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToIntArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToIntArray(::cordl_internals::Ptr<int32_t>  array, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToIntArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToLongArray(::ArrayW<int64_t,::Array<int64_t>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToLongArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int64_t,::Array<int64_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToLongArray(::cordl_internals::Ptr<int64_t>  array, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToLongArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToFloatArray(::ArrayW<float_t,::Array<float_t>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToFloatArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToFloatArray(::cordl_internals::Ptr<float_t>  array, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToFloatArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToDoubleArray(::ArrayW<double_t,::Array<double_t>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToDoubleArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<double_t,::Array<double_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToDoubleArray(::cordl_internals::Ptr<double_t>  array, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToDoubleArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<double_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToObjectArray(::cordl_internals::Ptr<::System::IntPtr>  array, int32_t  length, ::System::IntPtr  arrayClass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToObjectArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::System::IntPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array, length, arrayClass);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToObjectArray(::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>  array, ::System::IntPtr  arrayClass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToObjectArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array, arrayClass);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToObjectArray(::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "ToObjectArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array);
}
inline ::ArrayW<bool,::Array<bool>*> UnityEngine::AndroidJNI::FromBooleanArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromBooleanArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool,::Array<bool>*>, false>(nullptr, ___internal_method, array);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> UnityEngine::AndroidJNI::FromByteArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromByteArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(nullptr, ___internal_method, array);
}
inline ::ArrayW<int8_t,::Array<int8_t>*> UnityEngine::AndroidJNI::FromSByteArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromSByteArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int8_t,::Array<int8_t>*>, false>(nullptr, ___internal_method, array);
}
inline ::ArrayW<char16_t,::Array<char16_t>*> UnityEngine::AndroidJNI::FromCharArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromCharArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t,::Array<char16_t>*>, false>(nullptr, ___internal_method, array);
}
inline ::ArrayW<int16_t,::Array<int16_t>*> UnityEngine::AndroidJNI::FromShortArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromShortArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int16_t,::Array<int16_t>*>, false>(nullptr, ___internal_method, array);
}
inline ::ArrayW<int32_t,::Array<int32_t>*> UnityEngine::AndroidJNI::FromIntArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromIntArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t,::Array<int32_t>*>, false>(nullptr, ___internal_method, array);
}
inline ::ArrayW<int64_t,::Array<int64_t>*> UnityEngine::AndroidJNI::FromLongArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromLongArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int64_t,::Array<int64_t>*>, false>(nullptr, ___internal_method, array);
}
inline ::ArrayW<float_t,::Array<float_t>*> UnityEngine::AndroidJNI::FromFloatArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromFloatArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t,::Array<float_t>*>, false>(nullptr, ___internal_method, array);
}
inline ::ArrayW<double_t,::Array<double_t>*> UnityEngine::AndroidJNI::FromDoubleArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromDoubleArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<double_t,::Array<double_t>*>, false>(nullptr, ___internal_method, array);
}
inline ::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*> UnityEngine::AndroidJNI::FromObjectArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "FromObjectArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>, false>(nullptr, ___internal_method, array);
}
inline int32_t UnityEngine::AndroidJNI::GetArrayLength(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetArrayLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewBooleanArray(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewBooleanArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewByteArray(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewByteArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewSByteArray(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewSByteArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewCharArray(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewCharArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewShortArray(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewShortArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewIntArray(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewIntArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewLongArray(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewLongArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewFloatArray(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewFloatArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewDoubleArray(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewDoubleArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewObjectArray(int32_t  size, ::System::IntPtr  clazz, ::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewObjectArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, size, clazz, obj);
}
inline bool UnityEngine::AndroidJNI::GetBooleanArrayElement(::System::IntPtr  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetBooleanArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array, index);
}
inline uint8_t UnityEngine::AndroidJNI::GetByteArrayElement(::System::IntPtr  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetByteArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, array, index);
}
inline int8_t UnityEngine::AndroidJNI::GetSByteArrayElement(::System::IntPtr  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetSByteArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, array, index);
}
inline char16_t UnityEngine::AndroidJNI::GetCharArrayElement(::System::IntPtr  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetCharArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, array, index);
}
inline int16_t UnityEngine::AndroidJNI::GetShortArrayElement(::System::IntPtr  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetShortArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, array, index);
}
inline int32_t UnityEngine::AndroidJNI::GetIntArrayElement(::System::IntPtr  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetIntArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, index);
}
inline int64_t UnityEngine::AndroidJNI::GetLongArrayElement(::System::IntPtr  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetLongArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, array, index);
}
inline float_t UnityEngine::AndroidJNI::GetFloatArrayElement(::System::IntPtr  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetFloatArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, array, index);
}
inline double_t UnityEngine::AndroidJNI::GetDoubleArrayElement(::System::IntPtr  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetDoubleArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, array, index);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetObjectArrayElement(::System::IntPtr  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetObjectArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, array, index);
}
inline void UnityEngine::AndroidJNI::SetBooleanArrayElement(::System::IntPtr  array, int32_t  index, uint8_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetBooleanArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetBooleanArrayElement(::System::IntPtr  array, int32_t  index, bool  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetBooleanArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetByteArrayElement(::System::IntPtr  array, int32_t  index, int8_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetByteArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetSByteArrayElement(::System::IntPtr  array, int32_t  index, int8_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetSByteArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetCharArrayElement(::System::IntPtr  array, int32_t  index, char16_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetCharArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetShortArrayElement(::System::IntPtr  array, int32_t  index, int16_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetShortArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetIntArrayElement(::System::IntPtr  array, int32_t  index, int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetIntArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetLongArrayElement(::System::IntPtr  array, int32_t  index, int64_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetLongArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetFloatArrayElement(::System::IntPtr  array, int32_t  index, float_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetFloatArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetDoubleArrayElement(::System::IntPtr  array, int32_t  index, double_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetDoubleArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetObjectArrayElement(::System::IntPtr  array, int32_t  index, ::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "SetObjectArrayElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index, obj);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewDirectByteBuffer(::cordl_internals::Ptr<uint8_t>  buffer, int64_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewDirectByteBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, buffer, capacity);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewDirectByteBuffer(::Unity::Collections::NativeArray_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewDirectByteBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, buffer);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewDirectByteBuffer(::Unity::Collections::NativeArray_1<int8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "NewDirectByteBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int8_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, buffer);
}
template<typename T>
inline ::System::IntPtr UnityEngine::AndroidJNI::NewDirectByteBufferFromNativeArray(::Unity::Collections::NativeArray_1<T>  buffer)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                    "NewDirectByteBufferFromNativeArray",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<T>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, buffer);
}
inline ::cordl_internals::Ptr<int8_t> UnityEngine::AndroidJNI::GetDirectBufferAddress(::System::IntPtr  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetDirectBufferAddress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<int8_t>, false>(nullptr, ___internal_method, buffer);
}
inline int64_t UnityEngine::AndroidJNI::GetDirectBufferCapacity(::System::IntPtr  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetDirectBufferCapacity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, buffer);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::AndroidJNI::GetDirectBuffer(::System::IntPtr  buffer)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                    "GetDirectBuffer",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>, false>(nullptr, ___internal_method, buffer);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::AndroidJNI::GetDirectByteBuffer(::System::IntPtr  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetDirectByteBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(nullptr, ___internal_method, buffer);
}
inline ::Unity::Collections::NativeArray_1<int8_t> UnityEngine::AndroidJNI::GetDirectSByteBuffer(::System::IntPtr  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "GetDirectSByteBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int8_t>, false>(nullptr, ___internal_method, buffer);
}
inline int32_t UnityEngine::AndroidJNI::RegisterNatives(::System::IntPtr  clazz, ::ArrayW<::UnityEngine::JNINativeMethod,::Array<::UnityEngine::JNINativeMethod>*>  methods)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "RegisterNatives",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::JNINativeMethod,::Array<::UnityEngine::JNINativeMethod>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, clazz, methods);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::RegisterNativesAllocate(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "RegisterNativesAllocate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, length);
}
inline void UnityEngine::AndroidJNI::RegisterNativesSet(::System::IntPtr  natives, int32_t  idx, ::StringW  name, ::StringW  signature, ::System::IntPtr  fnPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "RegisterNativesSet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, natives, idx, name, signature, fnPtr);
}
inline int32_t UnityEngine::AndroidJNI::RegisterNativesAndFree(::System::IntPtr  clazz, ::System::IntPtr  natives, int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "RegisterNativesAndFree",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, clazz, natives, n);
}
inline int32_t UnityEngine::AndroidJNI::UnregisterNatives(::System::IntPtr  clazz)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJNI*>::get(),
                        "UnregisterNatives",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, clazz);
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJNI::AndroidJNI()   {
}
