#pragma once
// IWYU pragma private; include "VROSC/SaveLoadManager.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__Error_impl.hpp"
#include "VROSC/zzzz__SaveLoadManager_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "VROSC/zzzz__CloudStateManager_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__SaveLoadManager_def.hpp"
#include "VROSC/zzzz__ZipFileWriter_def.hpp"
//  Writing Method size for method: ::VROSC::SaveLoadManager___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c::*)()>(&::VROSC::SaveLoadManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x184d9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c._DeleteSession_b__38_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c::*)(::StringW)>(&::VROSC::SaveLoadManager___c::_DeleteSession_b__38_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x184d9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c*>::get(),
                        "<DeleteSession>b__38_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c._DeleteSession_b__38_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c::*)(::StringW, ::VROSC::Error)>(&::VROSC::SaveLoadManager___c::_DeleteSession_b__38_1)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x184da00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c*>::get(),
                        "<DeleteSession>b__38_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SaveLoadManager___c::setStaticF___9(::VROSC::SaveLoadManager___c*  value)  {
::cordl_internals::setStaticField<::VROSC::SaveLoadManager___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c*>::get>(std::forward<::VROSC::SaveLoadManager___c*>(value));
}
inline ::VROSC::SaveLoadManager___c* VROSC::SaveLoadManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::VROSC::SaveLoadManager___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c*>::get>();
}
inline void VROSC::SaveLoadManager___c::setStaticF___9__38_0(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__38_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c*>::get>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* VROSC::SaveLoadManager___c::getStaticF___9__38_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__38_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c*>::get>();
}
inline void VROSC::SaveLoadManager___c::setStaticF___9__38_1(::System::Action_2<::StringW,::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "<>9__38_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c*>::get>(std::forward<::System::Action_2<::StringW,::VROSC::Error>*>(value));
}
inline ::System::Action_2<::StringW,::VROSC::Error>* VROSC::SaveLoadManager___c::getStaticF___9__38_1()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "<>9__38_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c*>::get>();
}
inline void VROSC::SaveLoadManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager___c::_DeleteSession_b__38_0(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c*>::get(),
                        "<DeleteSession>b__38_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void VROSC::SaveLoadManager___c::_DeleteSession_b__38_1(::StringW  s, ::VROSC::Error  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c*>::get(),
                        "<DeleteSession>b__38_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, e);
}
inline ::VROSC::SaveLoadManager___c* VROSC::SaveLoadManager___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SaveLoadManager___c*>());
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager___c::SaveLoadManager___c()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass32_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass32_0::*)()>(&::VROSC::SaveLoadManager___c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x184da68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass32_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass32_0._LoadSession_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass32_0::*)()>(&::VROSC::SaveLoadManager___c__DisplayClass32_0::_LoadSession_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x184da70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass32_0*>::get(),
                        "<LoadSession>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass32_0._LoadSession_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass32_0::*)(::VROSC::Error)>(&::VROSC::SaveLoadManager___c__DisplayClass32_0::_LoadSession_b__1)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x184dae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass32_0*>::get(),
                        "<LoadSession>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::SaveLoadManager___c__DisplayClass32_0::__cordl_internal_get_sessionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr ::StringW const& VROSC::SaveLoadManager___c__DisplayClass32_0::__cordl_internal_get_sessionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass32_0::__cordl_internal_set_sessionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::SaveLoadManager___c__DisplayClass32_0::__cordl_internal_get_isDefaultSession()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDefaultSession;
}
constexpr bool const& VROSC::SaveLoadManager___c__DisplayClass32_0::__cordl_internal_get_isDefaultSession() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDefaultSession;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass32_0::__cordl_internal_set_isDefaultSession(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDefaultSession = value;
}
inline void VROSC::SaveLoadManager___c__DisplayClass32_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass32_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager___c__DisplayClass32_0::_LoadSession_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass32_0*>::get(),
                        "<LoadSession>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager___c__DisplayClass32_0::_LoadSession_b__1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass32_0*>::get(),
                        "<LoadSession>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::SaveLoadManager___c__DisplayClass32_0* VROSC::SaveLoadManager___c__DisplayClass32_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SaveLoadManager___c__DisplayClass32_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager___c__DisplayClass32_0::SaveLoadManager___c__DisplayClass32_0()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass35_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass35_0::*)()>(&::VROSC::SaveLoadManager___c__DisplayClass35_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x184bf7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass35_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass35_0._DeleteTemplateSession_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass35_0::*)(::StringW)>(&::VROSC::SaveLoadManager___c__DisplayClass35_0::_DeleteTemplateSession_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x184db64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass35_0*>::get(),
                        "<DeleteTemplateSession>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass35_0._DeleteTemplateSession_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass35_0::*)(::StringW, ::VROSC::Error)>(&::VROSC::SaveLoadManager___c__DisplayClass35_0::_DeleteTemplateSession_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x184db84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass35_0*>::get(),
                        "<DeleteTemplateSession>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::SaveLoadManager___c__DisplayClass35_0::__cordl_internal_get_onComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::SaveLoadManager___c__DisplayClass35_0::__cordl_internal_get_onComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass35_0::__cordl_internal_set_onComplete(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SaveLoadManager___c__DisplayClass35_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass35_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager___c__DisplayClass35_0::_DeleteTemplateSession_b__0(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass35_0*>::get(),
                        "<DeleteTemplateSession>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void VROSC::SaveLoadManager___c__DisplayClass35_0::_DeleteTemplateSession_b__1(::StringW  s, ::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass35_0*>::get(),
                        "<DeleteTemplateSession>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, error);
}
inline ::VROSC::SaveLoadManager___c__DisplayClass35_0* VROSC::SaveLoadManager___c__DisplayClass35_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SaveLoadManager___c__DisplayClass35_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager___c__DisplayClass35_0::SaveLoadManager___c__DisplayClass35_0()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass36_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass36_0::*)()>(&::VROSC::SaveLoadManager___c__DisplayClass36_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x184dba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass36_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass36_0._SaveSession_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass36_0::*)()>(&::VROSC::SaveLoadManager___c__DisplayClass36_0::_SaveSession_b__0)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x184dbb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass36_0*>::get(),
                        "<SaveSession>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass36_0._SaveSession_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass36_0::*)(::VROSC::Error)>(&::VROSC::SaveLoadManager___c__DisplayClass36_0::_SaveSession_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x184df40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass36_0*>::get(),
                        "<SaveSession>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::SaveLoadManager___c__DisplayClass36_0::__cordl_internal_get_isCloud()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCloud;
}
constexpr bool const& VROSC::SaveLoadManager___c__DisplayClass36_0::__cordl_internal_get_isCloud() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCloud;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass36_0::__cordl_internal_set_isCloud(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCloud = value;
}
constexpr bool& VROSC::SaveLoadManager___c__DisplayClass36_0::__cordl_internal_get_isCommunity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCommunity;
}
constexpr bool const& VROSC::SaveLoadManager___c__DisplayClass36_0::__cordl_internal_get_isCommunity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCommunity;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass36_0::__cordl_internal_set_isCommunity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCommunity = value;
}
constexpr ::UnityW<::VROSC::SaveLoadManager>& VROSC::SaveLoadManager___c__DisplayClass36_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::SaveLoadManager> const& VROSC::SaveLoadManager___c__DisplayClass36_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass36_0::__cordl_internal_set___4__this(::UnityW<::VROSC::SaveLoadManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::SaveLoadManager___c__DisplayClass36_0::__cordl_internal_get_sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr ::StringW const& VROSC::SaveLoadManager___c__DisplayClass36_0::__cordl_internal_get_sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass36_0::__cordl_internal_set_sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::SaveLoadManager___c__DisplayClass36_0::__cordl_internal_get_hasPreview()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPreview;
}
constexpr bool const& VROSC::SaveLoadManager___c__DisplayClass36_0::__cordl_internal_get_hasPreview() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPreview;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass36_0::__cordl_internal_set_hasPreview(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPreview = value;
}
inline void VROSC::SaveLoadManager___c__DisplayClass36_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass36_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager___c__DisplayClass36_0::_SaveSession_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass36_0*>::get(),
                        "<SaveSession>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager___c__DisplayClass36_0::_SaveSession_b__1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass36_0*>::get(),
                        "<SaveSession>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::SaveLoadManager___c__DisplayClass36_0* VROSC::SaveLoadManager___c__DisplayClass36_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SaveLoadManager___c__DisplayClass36_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager___c__DisplayClass36_0::SaveLoadManager___c__DisplayClass36_0()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass37_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass37_0::*)()>(&::VROSC::SaveLoadManager___c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x184dfc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass37_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass37_0._UpdateOldSaveFiles_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass37_0::*)()>(&::VROSC::SaveLoadManager___c__DisplayClass37_0::_UpdateOldSaveFiles_b__0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x184dfc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass37_0*>::get(),
                        "<UpdateOldSaveFiles>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass37_0._UpdateOldSaveFiles_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass37_0::*)(::VROSC::Error)>(&::VROSC::SaveLoadManager___c__DisplayClass37_0::_UpdateOldSaveFiles_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x184e008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass37_0*>::get(),
                        "<UpdateOldSaveFiles>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::SaveLoadManager___c__DisplayClass37_0::__cordl_internal_get_origin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr ::StringW const& VROSC::SaveLoadManager___c__DisplayClass37_0::__cordl_internal_get_origin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass37_0::__cordl_internal_set_origin(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___origin)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& VROSC::SaveLoadManager___c__DisplayClass37_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::SaveLoadManager___c__DisplayClass37_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass37_0::__cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::SaveLoadManager___c__DisplayClass37_0::__cordl_internal_get_sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr ::StringW const& VROSC::SaveLoadManager___c__DisplayClass37_0::__cordl_internal_get_sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass37_0::__cordl_internal_set_sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW,::VROSC::Error>*& VROSC::SaveLoadManager___c__DisplayClass37_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_2<::StringW,::VROSC::Error>* const& VROSC::SaveLoadManager___c__DisplayClass37_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass37_0::__cordl_internal_set_onFailure(::System::Action_2<::StringW,::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SaveLoadManager___c__DisplayClass37_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass37_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager___c__DisplayClass37_0::_UpdateOldSaveFiles_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass37_0*>::get(),
                        "<UpdateOldSaveFiles>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager___c__DisplayClass37_0::_UpdateOldSaveFiles_b__1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass37_0*>::get(),
                        "<UpdateOldSaveFiles>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::SaveLoadManager___c__DisplayClass37_0* VROSC::SaveLoadManager___c__DisplayClass37_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SaveLoadManager___c__DisplayClass37_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager___c__DisplayClass37_0::SaveLoadManager___c__DisplayClass37_0()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass38_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass38_0::*)()>(&::VROSC::SaveLoadManager___c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x184c440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass38_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass38_0._DeleteSession_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass38_0::*)(::StringW)>(&::VROSC::SaveLoadManager___c__DisplayClass38_0::_DeleteSession_b__2)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x184e02c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass38_0*>::get(),
                        "<DeleteSession>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::SaveLoadManager___c__DisplayClass38_0::__cordl_internal_get_sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr ::StringW const& VROSC::SaveLoadManager___c__DisplayClass38_0::__cordl_internal_get_sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass38_0::__cordl_internal_set_sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SaveLoadManager___c__DisplayClass38_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass38_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager___c__DisplayClass38_0::_DeleteSession_b__2(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass38_0*>::get(),
                        "<DeleteSession>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline ::VROSC::SaveLoadManager___c__DisplayClass38_0* VROSC::SaveLoadManager___c__DisplayClass38_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SaveLoadManager___c__DisplayClass38_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager___c__DisplayClass38_0::SaveLoadManager___c__DisplayClass38_0()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass38_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass38_1::*)()>(&::VROSC::SaveLoadManager___c__DisplayClass38_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x184e138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass38_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass38_1._DeleteSession_b__3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass38_1::*)()>(&::VROSC::SaveLoadManager___c__DisplayClass38_1::_DeleteSession_b__3)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x184e140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass38_1*>::get(),
                        "<DeleteSession>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass38_1._DeleteSession_b__4
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass38_1::*)(::VROSC::Error)>(&::VROSC::SaveLoadManager___c__DisplayClass38_1::_DeleteSession_b__4)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x184e1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass38_1*>::get(),
                        "<DeleteSession>b__4",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::SaveLoadManager___c__DisplayClass38_1::__cordl_internal_get_s()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___s;
}
constexpr ::StringW const& VROSC::SaveLoadManager___c__DisplayClass38_1::__cordl_internal_get_s() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___s;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass38_1::__cordl_internal_set_s(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___s)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SaveLoadManager___c__DisplayClass38_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass38_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager___c__DisplayClass38_1::_DeleteSession_b__3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass38_1*>::get(),
                        "<DeleteSession>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager___c__DisplayClass38_1::_DeleteSession_b__4(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass38_1*>::get(),
                        "<DeleteSession>b__4",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::SaveLoadManager___c__DisplayClass38_1* VROSC::SaveLoadManager___c__DisplayClass38_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SaveLoadManager___c__DisplayClass38_1*>());
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager___c__DisplayClass38_1::SaveLoadManager___c__DisplayClass38_1()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass39_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass39_0::*)()>(&::VROSC::SaveLoadManager___c__DisplayClass39_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x184e280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass39_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass39_0._LoadSessionPreview_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass39_0::*)(::UnityEngine::AudioClip*)>(&::VROSC::SaveLoadManager___c__DisplayClass39_0::_LoadSessionPreview_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x184e288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass39_0*>::get(),
                        "<LoadSessionPreview>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass39_0._LoadSessionPreview_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass39_0::*)(::VROSC::Error)>(&::VROSC::SaveLoadManager___c__DisplayClass39_0::_LoadSessionPreview_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x184e308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass39_0*>::get(),
                        "<LoadSessionPreview>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass39_0._LoadSessionPreview_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass39_0::*)(::UnityEngine::AudioClip*)>(&::VROSC::SaveLoadManager___c__DisplayClass39_0::_LoadSessionPreview_b__2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x184e388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass39_0*>::get(),
                        "<LoadSessionPreview>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass39_0._LoadSessionPreview_b__3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass39_0::*)(::VROSC::Error)>(&::VROSC::SaveLoadManager___c__DisplayClass39_0::_LoadSessionPreview_b__3)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x184e408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass39_0*>::get(),
                        "<LoadSessionPreview>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::SaveLoadManager___c__DisplayClass39_0::__cordl_internal_get_sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr ::StringW const& VROSC::SaveLoadManager___c__DisplayClass39_0::__cordl_internal_get_sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass39_0::__cordl_internal_set_sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SaveLoadManager___c__DisplayClass39_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass39_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager___c__DisplayClass39_0::_LoadSessionPreview_b__0(::UnityEngine::AudioClip*  audioClip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass39_0*>::get(),
                        "<LoadSessionPreview>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClip);
}
inline void VROSC::SaveLoadManager___c__DisplayClass39_0::_LoadSessionPreview_b__1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass39_0*>::get(),
                        "<LoadSessionPreview>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void VROSC::SaveLoadManager___c__DisplayClass39_0::_LoadSessionPreview_b__2(::UnityEngine::AudioClip*  audioClip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass39_0*>::get(),
                        "<LoadSessionPreview>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClip);
}
inline void VROSC::SaveLoadManager___c__DisplayClass39_0::_LoadSessionPreview_b__3(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass39_0*>::get(),
                        "<LoadSessionPreview>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::SaveLoadManager___c__DisplayClass39_0* VROSC::SaveLoadManager___c__DisplayClass39_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SaveLoadManager___c__DisplayClass39_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager___c__DisplayClass39_0::SaveLoadManager___c__DisplayClass39_0()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass42_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass42_0::*)()>(&::VROSC::SaveLoadManager___c__DisplayClass42_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x184e488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass42_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass42_0._LoadSessionFromCloudSuccess_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass42_0::*)()>(&::VROSC::SaveLoadManager___c__DisplayClass42_0::_LoadSessionFromCloudSuccess_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x184e490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass42_0*>::get(),
                        "<LoadSessionFromCloudSuccess>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass42_0._LoadSessionFromCloudSuccess_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass42_0::*)(::VROSC::Error)>(&::VROSC::SaveLoadManager___c__DisplayClass42_0::_LoadSessionFromCloudSuccess_b__1)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x184e510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass42_0*>::get(),
                        "<LoadSessionFromCloudSuccess>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::SaveLoadManager___c__DisplayClass42_0::__cordl_internal_get_sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr ::StringW const& VROSC::SaveLoadManager___c__DisplayClass42_0::__cordl_internal_get_sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass42_0::__cordl_internal_set_sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SaveLoadManager>& VROSC::SaveLoadManager___c__DisplayClass42_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::SaveLoadManager> const& VROSC::SaveLoadManager___c__DisplayClass42_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass42_0::__cordl_internal_set___4__this(::UnityW<::VROSC::SaveLoadManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::SaveLoadManager___c__DisplayClass42_0::__cordl_internal_get_origin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr ::StringW const& VROSC::SaveLoadManager___c__DisplayClass42_0::__cordl_internal_get_origin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass42_0::__cordl_internal_set_origin(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___origin)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SaveLoadManager___c__DisplayClass42_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass42_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager___c__DisplayClass42_0::_LoadSessionFromCloudSuccess_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass42_0*>::get(),
                        "<LoadSessionFromCloudSuccess>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager___c__DisplayClass42_0::_LoadSessionFromCloudSuccess_b__1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass42_0*>::get(),
                        "<LoadSessionFromCloudSuccess>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::SaveLoadManager___c__DisplayClass42_0* VROSC::SaveLoadManager___c__DisplayClass42_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SaveLoadManager___c__DisplayClass42_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager___c__DisplayClass42_0::SaveLoadManager___c__DisplayClass42_0()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass51_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass51_0::*)()>(&::VROSC::SaveLoadManager___c__DisplayClass51_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x184e5a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass51_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass51_0._DownloadPreviewFromCloudSuccess_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass51_0::*)(::UnityEngine::AudioClip*)>(&::VROSC::SaveLoadManager___c__DisplayClass51_0::_DownloadPreviewFromCloudSuccess_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x184e5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass51_0*>::get(),
                        "<DownloadPreviewFromCloudSuccess>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager___c__DisplayClass51_0._DownloadPreviewFromCloudSuccess_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager___c__DisplayClass51_0::*)(::VROSC::Error)>(&::VROSC::SaveLoadManager___c__DisplayClass51_0::_DownloadPreviewFromCloudSuccess_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x184e628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass51_0*>::get(),
                        "<DownloadPreviewFromCloudSuccess>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::SaveLoadManager___c__DisplayClass51_0::__cordl_internal_get_sessionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr ::StringW const& VROSC::SaveLoadManager___c__DisplayClass51_0::__cordl_internal_get_sessionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr void VROSC::SaveLoadManager___c__DisplayClass51_0::__cordl_internal_set_sessionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SaveLoadManager___c__DisplayClass51_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass51_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager___c__DisplayClass51_0::_DownloadPreviewFromCloudSuccess_b__0(::UnityEngine::AudioClip*  audioClip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass51_0*>::get(),
                        "<DownloadPreviewFromCloudSuccess>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClip);
}
inline void VROSC::SaveLoadManager___c__DisplayClass51_0::_DownloadPreviewFromCloudSuccess_b__1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager___c__DisplayClass51_0*>::get(),
                        "<DownloadPreviewFromCloudSuccess>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::SaveLoadManager___c__DisplayClass51_0* VROSC::SaveLoadManager___c__DisplayClass51_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SaveLoadManager___c__DisplayClass51_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager___c__DisplayClass51_0::SaveLoadManager___c__DisplayClass51_0()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager__DeleteFiles_d__47._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__DeleteFiles_d__47::*)(int32_t)>(&::VROSC::SaveLoadManager__DeleteFiles_d__47::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x184cf7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DeleteFiles_d__47*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__DeleteFiles_d__47.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__DeleteFiles_d__47::*)()>(&::VROSC::SaveLoadManager__DeleteFiles_d__47::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x184e6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DeleteFiles_d__47*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__DeleteFiles_d__47.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::SaveLoadManager__DeleteFiles_d__47::*)()>(&::VROSC::SaveLoadManager__DeleteFiles_d__47::MoveNext)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x184e6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DeleteFiles_d__47*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__DeleteFiles_d__47.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::SaveLoadManager__DeleteFiles_d__47::*)()>(&::VROSC::SaveLoadManager__DeleteFiles_d__47::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x184e938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DeleteFiles_d__47*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__DeleteFiles_d__47.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__DeleteFiles_d__47::*)()>(&::VROSC::SaveLoadManager__DeleteFiles_d__47::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x184e940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DeleteFiles_d__47*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__DeleteFiles_d__47.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::SaveLoadManager__DeleteFiles_d__47::*)()>(&::VROSC::SaveLoadManager__DeleteFiles_d__47::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x184e978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DeleteFiles_d__47*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::SaveLoadManager__DeleteFiles_d__47::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& VROSC::SaveLoadManager__DeleteFiles_d__47::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void VROSC::SaveLoadManager__DeleteFiles_d__47::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& VROSC::SaveLoadManager__DeleteFiles_d__47::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& VROSC::SaveLoadManager__DeleteFiles_d__47::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void VROSC::SaveLoadManager__DeleteFiles_d__47::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::SaveLoadManager__DeleteFiles_d__47::__cordl_internal_get_sessionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr ::StringW const& VROSC::SaveLoadManager__DeleteFiles_d__47::__cordl_internal_get_sessionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr void VROSC::SaveLoadManager__DeleteFiles_d__47::__cordl_internal_set_sessionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SaveLoadManager>& VROSC::SaveLoadManager__DeleteFiles_d__47::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::SaveLoadManager> const& VROSC::SaveLoadManager__DeleteFiles_d__47::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::SaveLoadManager__DeleteFiles_d__47::__cordl_internal_set___4__this(::UnityW<::VROSC::SaveLoadManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::SaveLoadManager__DeleteFiles_d__47::__cordl_internal_get__hasDeleted_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasDeleted_5__2;
}
constexpr bool const& VROSC::SaveLoadManager__DeleteFiles_d__47::__cordl_internal_get__hasDeleted_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasDeleted_5__2;
}
constexpr void VROSC::SaveLoadManager__DeleteFiles_d__47::__cordl_internal_set__hasDeleted_5__2(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasDeleted_5__2 = value;
}
inline void VROSC::SaveLoadManager__DeleteFiles_d__47::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DeleteFiles_d__47*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void VROSC::SaveLoadManager__DeleteFiles_d__47::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DeleteFiles_d__47*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::SaveLoadManager__DeleteFiles_d__47::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DeleteFiles_d__47*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::SaveLoadManager__DeleteFiles_d__47::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DeleteFiles_d__47*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager__DeleteFiles_d__47::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DeleteFiles_d__47*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::SaveLoadManager__DeleteFiles_d__47::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DeleteFiles_d__47*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::VROSC::SaveLoadManager__DeleteFiles_d__47* VROSC::SaveLoadManager__DeleteFiles_d__47::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SaveLoadManager__DeleteFiles_d__47*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  VROSC::SaveLoadManager__DeleteFiles_d__47::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* VROSC::SaveLoadManager__DeleteFiles_d__47::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  VROSC::SaveLoadManager__DeleteFiles_d__47::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* VROSC::SaveLoadManager__DeleteFiles_d__47::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  VROSC::SaveLoadManager__DeleteFiles_d__47::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* VROSC::SaveLoadManager__DeleteFiles_d__47::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager__DeleteFiles_d__47::SaveLoadManager__DeleteFiles_d__47()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51::*)()>(&::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51::MoveNext)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x184e980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x184ebe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "isOgg", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  sessionName, bool  isOgg, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->sessionName = sessionName;
this->isOgg = isOgg;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager__Load_d__24.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__Load_d__24::*)()>(&::VROSC::SaveLoadManager__Load_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x184ebf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__Load_d__24>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__Load_d__24.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__Load_d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::SaveLoadManager__Load_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x184f1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__Load_d__24>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SaveLoadManager__Load_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__Load_d__24>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager__Load_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__Load_d__24>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::SaveLoadManager__Load_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::SaveLoadManager__Load_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSuccess", ty: "::System::Action_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_returnError_5__2", ty: "::VROSC::Error", modifiers: "", def_value: Some("{}") }, CppParam { name: "_result_5__3", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_reader_5__4", ty: "::System::IO::StreamReader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SaveLoadManager__Load_d__24::SaveLoadManager__Load_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  path, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure, ::VROSC::Error  _returnError_5__2, ::StringW  _result_5__3, ::System::IO::StreamReader*  _reader_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->path = path;
this->onSuccess = onSuccess;
this->onFailure = onFailure;
this->_returnError_5__2 = _returnError_5__2;
this->_result_5__3 = _result_5__3;
this->_reader_5__4 = _reader_5__4;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager__Load_d__24::SaveLoadManager__Load_d__24()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager__LoadDefaultSession_d__29.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__LoadDefaultSession_d__29::*)()>(&::VROSC::SaveLoadManager__LoadDefaultSession_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x184f1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadDefaultSession_d__29>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__LoadDefaultSession_d__29.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__LoadDefaultSession_d__29::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::SaveLoadManager__LoadDefaultSession_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x184f884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadDefaultSession_d__29>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SaveLoadManager__LoadDefaultSession_d__29::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadDefaultSession_d__29>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager__LoadDefaultSession_d__29::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadDefaultSession_d__29>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::SaveLoadManager__LoadDefaultSession_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::SaveLoadManager__LoadDefaultSession_d__29::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_webRequest_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SaveLoadManager__LoadDefaultSession_d__29::SaveLoadManager__LoadDefaultSession_d__29(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::UnityEngine::Networking::UnityWebRequest*  _webRequest_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_webRequest_5__2 = _webRequest_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager__LoadDefaultSession_d__29::SaveLoadManager__LoadDefaultSession_d__29()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager__LoadSession_d__32.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__LoadSession_d__32::*)()>(&::VROSC::SaveLoadManager__LoadSession_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x184f890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadSession_d__32>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__LoadSession_d__32.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__LoadSession_d__32::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::SaveLoadManager__LoadSession_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x184fc88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadSession_d__32>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SaveLoadManager__LoadSession_d__32::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadSession_d__32>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager__LoadSession_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadSession_d__32>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::SaveLoadManager__LoadSession_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::SaveLoadManager__LoadSession_d__32::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "isDefaultSession", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "origin", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "destination", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SaveLoadManager__LoadSession_d__32::SaveLoadManager__LoadSession_d__32(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  sessionName, bool  isDefaultSession, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::StringW  origin, ::StringW  destination, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->sessionName = sessionName;
this->isDefaultSession = isDefaultSession;
this->__4__this = __4__this;
this->origin = origin;
this->destination = destination;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager__LoadSession_d__32::SaveLoadManager__LoadSession_d__32()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42::*)()>(&::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x184fcf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18501c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "sessionId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42::SaveLoadManager__LoadSessionFromCloudSuccess_d__42(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  sessionId, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->sessionId = sessionId;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42::SaveLoadManager__LoadSessionFromCloudSuccess_d__42()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager__LoadSessionPreview_d__39.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__LoadSessionPreview_d__39::*)()>(&::VROSC::SaveLoadManager__LoadSessionPreview_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x18501cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadSessionPreview_d__39>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__LoadSessionPreview_d__39.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__LoadSessionPreview_d__39::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::SaveLoadManager__LoadSessionPreview_d__39::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18505d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadSessionPreview_d__39>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SaveLoadManager__LoadSessionPreview_d__39::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadSessionPreview_d__39>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager__LoadSessionPreview_d__39::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadSessionPreview_d__39>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::SaveLoadManager__LoadSessionPreview_d__39::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::SaveLoadManager__LoadSessionPreview_d__39::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "sessionId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "inCloud", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isCommunity", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isOgg", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SaveLoadManager__LoadSessionPreview_d__39::SaveLoadManager__LoadSessionPreview_d__39(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  sessionId, bool  inCloud, bool  isCommunity, bool  isOgg, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::StringW  userId, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->sessionId = sessionId;
this->inCloud = inCloud;
this->isCommunity = isCommunity;
this->isOgg = isOgg;
this->__4__this = __4__this;
this->userId = userId;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager__LoadSessionPreview_d__39::SaveLoadManager__LoadSessionPreview_d__39()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager__LoadTemplateSession_d__30.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__LoadTemplateSession_d__30::*)()>(&::VROSC::SaveLoadManager__LoadTemplateSession_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x18505dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadTemplateSession_d__30>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__LoadTemplateSession_d__30.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__LoadTemplateSession_d__30::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::SaveLoadManager__LoadTemplateSession_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1850810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadTemplateSession_d__30>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SaveLoadManager__LoadTemplateSession_d__30::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadTemplateSession_d__30>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager__LoadTemplateSession_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadTemplateSession_d__30>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::SaveLoadManager__LoadTemplateSession_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::SaveLoadManager__LoadTemplateSession_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SaveLoadManager__LoadTemplateSession_d__30::SaveLoadManager__LoadTemplateSession_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager__LoadTemplateSession_d__30::SaveLoadManager__LoadTemplateSession_d__30()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager__LoadUserSession_d__31.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__LoadUserSession_d__31::*)()>(&::VROSC::SaveLoadManager__LoadUserSession_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x185081c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadUserSession_d__31>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__LoadUserSession_d__31.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__LoadUserSession_d__31::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::SaveLoadManager__LoadUserSession_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1850c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadUserSession_d__31>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SaveLoadManager__LoadUserSession_d__31::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadUserSession_d__31>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager__LoadUserSession_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__LoadUserSession_d__31>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::SaveLoadManager__LoadUserSession_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::SaveLoadManager__LoadUserSession_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "fromCloud", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isCommunity", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SaveLoadManager__LoadUserSession_d__31::SaveLoadManager__LoadUserSession_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, bool  fromCloud, bool  isCommunity, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::StringW  sessionName, ::StringW  userId, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->fromCloud = fromCloud;
this->isCommunity = isCommunity;
this->__4__this = __4__this;
this->sessionName = sessionName;
this->userId = userId;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager__LoadUserSession_d__31::SaveLoadManager__LoadUserSession_d__31()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager__Save_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__Save_d__27::*)()>(&::VROSC::SaveLoadManager__Save_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x1850c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__Save_d__27>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__Save_d__27.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__Save_d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::SaveLoadManager__Save_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1851154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__Save_d__27>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SaveLoadManager__Save_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__Save_d__27>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager__Save_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__Save_d__27>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::SaveLoadManager__Save_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::SaveLoadManager__Save_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sw_5__2", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SaveLoadManager__Save_d__27::SaveLoadManager__Save_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  path, ::StringW  data, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Action*  onSuccess, ::System::IO::StreamWriter*  _sw_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->path = path;
this->data = data;
this->onFailure = onFailure;
this->onSuccess = onSuccess;
this->_sw_5__2 = _sw_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager__Save_d__27::SaveLoadManager__Save_d__27()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager__SaveSession_d__36.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__SaveSession_d__36::*)()>(&::VROSC::SaveLoadManager__SaveSession_d__36::MoveNext)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x1851160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__SaveSession_d__36>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__SaveSession_d__36.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__SaveSession_d__36::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::SaveLoadManager__SaveSession_d__36::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1851614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__SaveSession_d__36>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SaveLoadManager__SaveSession_d__36::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__SaveSession_d__36>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager__SaveSession_d__36::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__SaveSession_d__36>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::SaveLoadManager__SaveSession_d__36::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::SaveLoadManager__SaveSession_d__36::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "isCloud", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isCommunity", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sessionId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasPreview", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SaveLoadManager__SaveSession_d__36::SaveLoadManager__SaveSession_d__36(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, bool  isCloud, bool  isCommunity, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::StringW  sessionId, bool  hasPreview, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->isCloud = isCloud;
this->isCommunity = isCommunity;
this->__4__this = __4__this;
this->sessionId = sessionId;
this->hasPreview = hasPreview;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager__SaveSession_d__36::SaveLoadManager__SaveSession_d__36()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37::*)()>(&::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x1851620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x18519e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSuccess", ty: "::System::Action_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "sessionId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "onFailure", ty: "::System::Action_2<::StringW,::VROSC::Error>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37::SaveLoadManager__UpdateOldSaveFiles_d__37(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Action_1<::StringW>*  onSuccess, ::StringW  sessionId, ::System::Action_2<::StringW,::VROSC::Error>*  onFailure, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->onSuccess = onSuccess;
this->sessionId = sessionId;
this->onFailure = onFailure;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37::SaveLoadManager__UpdateOldSaveFiles_d__37()   {
}
//  Writing Method size for method: ::VROSC::SaveLoadManager.get_ZipFileWriter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::ZipFileWriter* (::VROSC::SaveLoadManager::*)()>(&::VROSC::SaveLoadManager::get_ZipFileWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x184afe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "get_ZipFileWriter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)()>(&::VROSC::SaveLoadManager::Awake)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x184afe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)()>(&::VROSC::SaveLoadManager::OnDestroy)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x184b194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)()>(&::VROSC::SaveLoadManager::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x184b340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.LoadModel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::SaveLoadManager::LoadModel)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x184b424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.LoadFromSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, ::StringW, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::SaveLoadManager::LoadFromSession)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x184218c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadFromSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.Load
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::SaveLoadManager::Load)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x184b544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "Load",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.SaveModel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, ::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::SaveLoadManager::SaveModel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x184b6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "SaveModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.SaveModelToSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, ::StringW, ::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::SaveLoadManager::SaveModelToSession)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x184b7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "SaveModelToSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.Save
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, ::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::SaveLoadManager::Save)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x184b720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "Save",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.DeleteModelFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW)>(&::VROSC::SaveLoadManager::DeleteModelFile)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x184b814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DeleteModelFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.LoadDefaultSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)()>(&::VROSC::SaveLoadManager::LoadDefaultSession)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x184b844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadDefaultSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.LoadTemplateSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)()>(&::VROSC::SaveLoadManager::LoadTemplateSession)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x184b8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadTemplateSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.LoadUserSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, ::StringW, bool, bool)>(&::VROSC::SaveLoadManager::LoadUserSession)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x184b960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadUserSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.LoadSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::VROSC::SaveLoadManager::*)(::StringW, ::StringW, ::StringW, bool)>(&::VROSC::SaveLoadManager::LoadSession)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x184ba24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.PrepareFoldersForSessionSave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW)>(&::VROSC::SaveLoadManager::PrepareFoldersForSessionSave)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x184bb18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "PrepareFoldersForSessionSave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.SaveTemplateSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, ::StringW, bool)>(&::VROSC::SaveLoadManager::SaveTemplateSession)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x184bbd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "SaveTemplateSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.DeleteTemplateSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::System::Action_1<::VROSC::Error>*)>(&::VROSC::SaveLoadManager::DeleteTemplateSession)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x184be60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DeleteTemplateSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.SaveSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, bool, bool, bool)>(&::VROSC::SaveLoadManager::SaveSession)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x184bf84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "SaveSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.UpdateOldSaveFiles
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::VROSC::SaveLoadManager::*)(::StringW, ::System::Action_1<::StringW>*, ::System::Action_2<::StringW,::VROSC::Error>*)>(&::VROSC::SaveLoadManager::UpdateOldSaveFiles)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x184a49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "UpdateOldSaveFiles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.DeleteSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, bool, bool, bool, bool)>(&::VROSC::SaveLoadManager::DeleteSession)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x184c04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DeleteSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.LoadSessionPreview
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, ::StringW, bool, bool, bool)>(&::VROSC::SaveLoadManager::LoadSessionPreview)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x184c448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadSessionPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.GetSavePath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::SaveLoadManager::*)(::StringW)>(&::VROSC::SaveLoadManager::GetSavePath)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x184b450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "GetSavePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.GetSessionSavePath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::SaveLoadManager::*)(::StringW, ::StringW)>(&::VROSC::SaveLoadManager::GetSessionSavePath)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x184b5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "GetSessionSavePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.LoadSessionFromCloudSuccess
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW)>(&::VROSC::SaveLoadManager::LoadSessionFromCloudSuccess)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x184c520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadSessionFromCloudSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.LoadSessionFromCloudFailure
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, ::VROSC::Error)>(&::VROSC::SaveLoadManager::LoadSessionFromCloudFailure)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x184c5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadSessionFromCloudFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.LoadSessionFromCloudForTemplateSuccess
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW)>(&::VROSC::SaveLoadManager::LoadSessionFromCloudForTemplateSuccess)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x184c7c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadSessionFromCloudForTemplateSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.LoadSessionFromCloudForTemplateFailure
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, ::VROSC::Error)>(&::VROSC::SaveLoadManager::LoadSessionFromCloudForTemplateFailure)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x184ca94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadSessionFromCloudForTemplateFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.SaveSessionToCloudSuccess
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW)>(&::VROSC::SaveLoadManager::SaveSessionToCloudSuccess)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x184cc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "SaveSessionToCloudSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.DeleteFiles
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::VROSC::SaveLoadManager::*)(::StringW)>(&::VROSC::SaveLoadManager::DeleteFiles)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x184cf10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DeleteFiles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.SaveSessionToCloudFailure
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, ::VROSC::Error)>(&::VROSC::SaveLoadManager::SaveSessionToCloudFailure)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x184cfa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "SaveSessionToCloudFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.DeleteSessionFromCloudSuccess
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW)>(&::VROSC::SaveLoadManager::DeleteSessionFromCloudSuccess)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x184d1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DeleteSessionFromCloudSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.DeleteSessionFromCloudFailure
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, ::VROSC::Error)>(&::VROSC::SaveLoadManager::DeleteSessionFromCloudFailure)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x184d598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DeleteSessionFromCloudFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.DownloadPreviewFromCloudSuccess
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, bool)>(&::VROSC::SaveLoadManager::DownloadPreviewFromCloudSuccess)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x184d7a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DownloadPreviewFromCloudSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager.DownloadPreviewFromCloudFailure
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)(::StringW, ::VROSC::Error)>(&::VROSC::SaveLoadManager::DownloadPreviewFromCloudFailure)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x184d840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DownloadPreviewFromCloudFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadManager::*)()>(&::VROSC::SaveLoadManager::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x184d8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::CloudStateManager>& VROSC::SaveLoadManager::__cordl_internal_get__cloudStateManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cloudStateManager;
}
constexpr ::UnityW<::VROSC::CloudStateManager> const& VROSC::SaveLoadManager::__cordl_internal_get__cloudStateManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cloudStateManager;
}
constexpr void VROSC::SaveLoadManager::__cordl_internal_set__cloudStateManager(::UnityW<::VROSC::CloudStateManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cloudStateManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::ZipFileWriter*& VROSC::SaveLoadManager::__cordl_internal_get__zipFileWriter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zipFileWriter;
}
constexpr ::VROSC::ZipFileWriter* const& VROSC::SaveLoadManager::__cordl_internal_get__zipFileWriter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zipFileWriter;
}
constexpr void VROSC::SaveLoadManager::__cordl_internal_set__zipFileWriter(::VROSC::ZipFileWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____zipFileWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SaveLoadManager::setStaticF_OnLoadSessionStart(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnLoadSessionStart", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::SaveLoadManager::getStaticF_OnLoadSessionStart()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnLoadSessionStart", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>();
}
inline void VROSC::SaveLoadManager::setStaticF_OnLoadSessionSuccess(::System::Action_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,bool>*, "OnLoadSessionSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>(std::forward<::System::Action_2<::StringW,bool>*>(value));
}
inline ::System::Action_2<::StringW,bool>* VROSC::SaveLoadManager::getStaticF_OnLoadSessionSuccess()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,bool>*, "OnLoadSessionSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>();
}
inline void VROSC::SaveLoadManager::setStaticF_OnLoadSessionFailure(::System::Action_3<::StringW,bool,::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<::StringW,bool,::VROSC::Error>*, "OnLoadSessionFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>(std::forward<::System::Action_3<::StringW,bool,::VROSC::Error>*>(value));
}
inline ::System::Action_3<::StringW,bool,::VROSC::Error>* VROSC::SaveLoadManager::getStaticF_OnLoadSessionFailure()  {
return ::cordl_internals::getStaticField<::System::Action_3<::StringW,bool,::VROSC::Error>*, "OnLoadSessionFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>();
}
inline void VROSC::SaveLoadManager::setStaticF_OnSaveSessionSuccess(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "OnSaveSessionSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* VROSC::SaveLoadManager::getStaticF_OnSaveSessionSuccess()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "OnSaveSessionSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>();
}
inline void VROSC::SaveLoadManager::setStaticF_OnSaveSessionFailure(::System::Action_2<::StringW,::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnSaveSessionFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>(std::forward<::System::Action_2<::StringW,::VROSC::Error>*>(value));
}
inline ::System::Action_2<::StringW,::VROSC::Error>* VROSC::SaveLoadManager::getStaticF_OnSaveSessionFailure()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnSaveSessionFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>();
}
inline void VROSC::SaveLoadManager::setStaticF_OnDeleteSessionSuccess(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "OnDeleteSessionSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* VROSC::SaveLoadManager::getStaticF_OnDeleteSessionSuccess()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "OnDeleteSessionSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>();
}
inline void VROSC::SaveLoadManager::setStaticF_OnDeleteSessionFailure(::System::Action_2<::StringW,::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnDeleteSessionFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>(std::forward<::System::Action_2<::StringW,::VROSC::Error>*>(value));
}
inline ::System::Action_2<::StringW,::VROSC::Error>* VROSC::SaveLoadManager::getStaticF_OnDeleteSessionFailure()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnDeleteSessionFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>();
}
inline void VROSC::SaveLoadManager::setStaticF_OnLoadPreviewSuccess(::System::Action_2<::StringW,::UnityW<::UnityEngine::AudioClip>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::UnityW<::UnityEngine::AudioClip>>*, "OnLoadPreviewSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>(std::forward<::System::Action_2<::StringW,::UnityW<::UnityEngine::AudioClip>>*>(value));
}
inline ::System::Action_2<::StringW,::UnityW<::UnityEngine::AudioClip>>* VROSC::SaveLoadManager::getStaticF_OnLoadPreviewSuccess()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::UnityW<::UnityEngine::AudioClip>>*, "OnLoadPreviewSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>();
}
inline void VROSC::SaveLoadManager::setStaticF_OnLoadPreviewFailure(::System::Action_2<::StringW,::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnLoadPreviewFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>(std::forward<::System::Action_2<::StringW,::VROSC::Error>*>(value));
}
inline ::System::Action_2<::StringW,::VROSC::Error>* VROSC::SaveLoadManager::getStaticF_OnLoadPreviewFailure()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnLoadPreviewFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>();
}
inline void VROSC::SaveLoadManager::setStaticF_OnSaveTemplateSuccess(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "OnSaveTemplateSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* VROSC::SaveLoadManager::getStaticF_OnSaveTemplateSuccess()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "OnSaveTemplateSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>();
}
inline void VROSC::SaveLoadManager::setStaticF_OnSaveTemplateFailure(::System::Action_2<::StringW,::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnSaveTemplateFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>(std::forward<::System::Action_2<::StringW,::VROSC::Error>*>(value));
}
inline ::System::Action_2<::StringW,::VROSC::Error>* VROSC::SaveLoadManager::getStaticF_OnSaveTemplateFailure()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnSaveTemplateFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get>();
}
inline ::VROSC::ZipFileWriter* VROSC::SaveLoadManager::get_ZipFileWriter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "get_ZipFileWriter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::ZipFileWriter*, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager::LoadModel(::StringW  dataModelKey, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataModelKey, onSuccess, onFailure);
}
inline void VROSC::SaveLoadManager::LoadFromSession(::StringW  sessionId, ::StringW  dataModelKey, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadFromSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, dataModelKey, onSuccess, onFailure);
}
inline void VROSC::SaveLoadManager::Load(::StringW  path, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "Load",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path, onSuccess, onFailure);
}
inline void VROSC::SaveLoadManager::SaveModel(::StringW  dataModelKey, ::StringW  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "SaveModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataModelKey, data, onSuccess, onFailure);
}
inline void VROSC::SaveLoadManager::SaveModelToSession(::StringW  dataModelKey, ::StringW  sessionId, ::StringW  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "SaveModelToSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataModelKey, sessionId, data, onSuccess, onFailure);
}
inline void VROSC::SaveLoadManager::Save(::StringW  path, ::StringW  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "Save",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path, data, onSuccess, onFailure);
}
inline void VROSC::SaveLoadManager::DeleteModelFile(::StringW  dataModelKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DeleteModelFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataModelKey);
}
inline void VROSC::SaveLoadManager::LoadDefaultSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadDefaultSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager::LoadTemplateSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadTemplateSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadManager::LoadUserSession(::StringW  sessionName, ::StringW  userId, bool  fromCloud, bool  isCommunity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadUserSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionName, userId, fromCloud, isCommunity);
}
inline ::System::Threading::Tasks::Task* VROSC::SaveLoadManager::LoadSession(::StringW  origin, ::StringW  destination, ::StringW  sessionName, bool  isDefaultSession)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, origin, destination, sessionName, isDefaultSession);
}
inline void VROSC::SaveLoadManager::PrepareFoldersForSessionSave(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "PrepareFoldersForSessionSave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId);
}
inline void VROSC::SaveLoadManager::SaveTemplateSession(::StringW  sessionId, ::StringW  userId, bool  fromCloud)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "SaveTemplateSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, userId, fromCloud);
}
inline void VROSC::SaveLoadManager::DeleteTemplateSession(::System::Action_1<::VROSC::Error>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DeleteTemplateSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onComplete);
}
inline void VROSC::SaveLoadManager::SaveSession(::StringW  sessionId, bool  isCloud, bool  isCommunity, bool  hasPreview)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "SaveSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, isCloud, isCommunity, hasPreview);
}
inline ::System::Threading::Tasks::Task* VROSC::SaveLoadManager::UpdateOldSaveFiles(::StringW  sessionId, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_2<::StringW,::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "UpdateOldSaveFiles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, sessionId, onSuccess, onFailure);
}
inline void VROSC::SaveLoadManager::DeleteSession(::StringW  sessionId, bool  inCloud, bool  isCommunity, bool  isOgg, bool  isTemplate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DeleteSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, inCloud, isCommunity, isOgg, isTemplate);
}
inline void VROSC::SaveLoadManager::LoadSessionPreview(::StringW  sessionId, ::StringW  userId, bool  inCloud, bool  isCommunity, bool  isOgg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadSessionPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, userId, inCloud, isCommunity, isOgg);
}
inline ::StringW VROSC::SaveLoadManager::GetSavePath(::StringW  postfix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "GetSavePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, postfix);
}
inline ::StringW VROSC::SaveLoadManager::GetSessionSavePath(::StringW  sessionId, ::StringW  postfix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "GetSessionSavePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, sessionId, postfix);
}
inline void VROSC::SaveLoadManager::LoadSessionFromCloudSuccess(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadSessionFromCloudSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId);
}
inline void VROSC::SaveLoadManager::LoadSessionFromCloudFailure(::StringW  sessionId, ::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadSessionFromCloudFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, error);
}
inline void VROSC::SaveLoadManager::LoadSessionFromCloudForTemplateSuccess(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadSessionFromCloudForTemplateSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId);
}
inline void VROSC::SaveLoadManager::LoadSessionFromCloudForTemplateFailure(::StringW  sessionId, ::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "LoadSessionFromCloudForTemplateFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, error);
}
inline void VROSC::SaveLoadManager::SaveSessionToCloudSuccess(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "SaveSessionToCloudSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId);
}
inline ::System::Collections::IEnumerator* VROSC::SaveLoadManager::DeleteFiles(::StringW  sessionName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DeleteFiles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, sessionName);
}
inline void VROSC::SaveLoadManager::SaveSessionToCloudFailure(::StringW  sessionName, ::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "SaveSessionToCloudFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionName, error);
}
inline void VROSC::SaveLoadManager::DeleteSessionFromCloudSuccess(::StringW  sessionName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DeleteSessionFromCloudSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionName);
}
inline void VROSC::SaveLoadManager::DeleteSessionFromCloudFailure(::StringW  sessionName, ::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DeleteSessionFromCloudFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionName, error);
}
inline void VROSC::SaveLoadManager::DownloadPreviewFromCloudSuccess(::StringW  sessionName, bool  isOgg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DownloadPreviewFromCloudSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionName, isOgg);
}
inline void VROSC::SaveLoadManager::DownloadPreviewFromCloudFailure(::StringW  sessionName, ::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        "DownloadPreviewFromCloudFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionName, error);
}
inline void VROSC::SaveLoadManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SaveLoadManager* VROSC::SaveLoadManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SaveLoadManager*>());
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadManager::SaveLoadManager()   {
}
