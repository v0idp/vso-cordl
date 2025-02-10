#pragma once
// IWYU pragma private; include "VROSC/OldSavesHandler.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__OldSavesHandler_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__LocalSessionsDataController_def.hpp"
#include "VROSC/zzzz__OldSavesHandler_def.hpp"
#include "VROSC/zzzz__SaveLoadManager_def.hpp"
//  Writing Method size for method: ::VROSC::OldSavesHandler___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OldSavesHandler___c::*)()>(&::VROSC::OldSavesHandler___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1849e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OldSavesHandler___c._PackageSession_b__6_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OldSavesHandler___c::*)(::StringW)>(&::VROSC::OldSavesHandler___c::_PackageSession_b__6_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1849e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler___c*>::get(),
                        "<PackageSession>b__6_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OldSavesHandler___c._PackageSession_b__6_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OldSavesHandler___c::*)(::StringW, ::VROSC::Error)>(&::VROSC::OldSavesHandler___c::_PackageSession_b__6_1)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1849eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler___c*>::get(),
                        "<PackageSession>b__6_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::OldSavesHandler___c::setStaticF___9(::VROSC::OldSavesHandler___c*  value)  {
::cordl_internals::setStaticField<::VROSC::OldSavesHandler___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler___c*>::get>(std::forward<::VROSC::OldSavesHandler___c*>(value));
}
inline ::VROSC::OldSavesHandler___c* VROSC::OldSavesHandler___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::VROSC::OldSavesHandler___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler___c*>::get>();
}
inline void VROSC::OldSavesHandler___c::setStaticF___9__6_0(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler___c*>::get>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* VROSC::OldSavesHandler___c::getStaticF___9__6_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler___c*>::get>();
}
inline void VROSC::OldSavesHandler___c::setStaticF___9__6_1(::System::Action_2<::StringW,::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "<>9__6_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler___c*>::get>(std::forward<::System::Action_2<::StringW,::VROSC::Error>*>(value));
}
inline ::System::Action_2<::StringW,::VROSC::Error>* VROSC::OldSavesHandler___c::getStaticF___9__6_1()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "<>9__6_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler___c*>::get>();
}
inline void VROSC::OldSavesHandler___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::OldSavesHandler___c::_PackageSession_b__6_0(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler___c*>::get(),
                        "<PackageSession>b__6_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void VROSC::OldSavesHandler___c::_PackageSession_b__6_1(::StringW  s, ::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler___c*>::get(),
                        "<PackageSession>b__6_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, error);
}
inline ::VROSC::OldSavesHandler___c* VROSC::OldSavesHandler___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::OldSavesHandler___c*>());
}
// Ctor Parameters []
constexpr ::VROSC::OldSavesHandler___c::OldSavesHandler___c()   {
}
//  Writing Method size for method: ::VROSC::OldSavesHandler__Execute_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OldSavesHandler__Execute_d__3::*)()>(&::VROSC::OldSavesHandler__Execute_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1849f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler__Execute_d__3>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OldSavesHandler__Execute_d__3.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OldSavesHandler__Execute_d__3::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::OldSavesHandler__Execute_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x184a158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler__Execute_d__3>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::OldSavesHandler__Execute_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler__Execute_d__3>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::OldSavesHandler__Execute_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler__Execute_d__3>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::OldSavesHandler__Execute_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::OldSavesHandler__Execute_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::OldSavesHandler*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::OldSavesHandler__Execute_d__3::OldSavesHandler__Execute_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::OldSavesHandler*  __4__this, ::System::Action*  onSuccess, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->onSuccess = onSuccess;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::OldSavesHandler__Execute_d__3::OldSavesHandler__Execute_d__3()   {
}
//  Writing Method size for method: ::VROSC::OldSavesHandler__PackageSession_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OldSavesHandler__PackageSession_d__6::*)()>(&::VROSC::OldSavesHandler__PackageSession_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x184a164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler__PackageSession_d__6>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OldSavesHandler__PackageSession_d__6.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OldSavesHandler__PackageSession_d__6::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::OldSavesHandler__PackageSession_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x184a584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler__PackageSession_d__6>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::OldSavesHandler__PackageSession_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler__PackageSession_d__6>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::OldSavesHandler__PackageSession_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler__PackageSession_d__6>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::OldSavesHandler__PackageSession_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::OldSavesHandler__PackageSession_d__6::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::OldSavesHandler*", modifiers: "", def_value: Some("{}") }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::OldSavesHandler__PackageSession_d__6::OldSavesHandler__PackageSession_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::VROSC::OldSavesHandler*  __4__this, ::StringW  sessionName, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->sessionName = sessionName;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::OldSavesHandler__PackageSession_d__6::OldSavesHandler__PackageSession_d__6()   {
}
//  Writing Method size for method: ::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5::*)()>(&::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x98c;
  constexpr static std::size_t addrs = 0x184a5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x184af78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::OldSavesHandler__UpdateSessionsFiles_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::OldSavesHandler__UpdateSessionsFiles_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::OldSavesHandler__UpdateSessionsFiles_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::OldSavesHandler__UpdateSessionsFiles_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::OldSavesHandler*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sessionsToRemove_5__2", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty: "::System::Collections::Generic::List_1_Enumerator<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5::OldSavesHandler__UpdateSessionsFiles_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::VROSC::OldSavesHandler*  __4__this, ::System::Collections::Generic::List_1<::StringW>*  _sessionsToRemove_5__2, ::System::Collections::Generic::List_1_Enumerator<::StringW>  __7__wrap2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_sessionsToRemove_5__2 = _sessionsToRemove_5__2;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5::OldSavesHandler__UpdateSessionsFiles_d__5()   {
}
//  Writing Method size for method: ::VROSC::OldSavesHandler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OldSavesHandler::*)(::VROSC::SaveLoadManager*, ::VROSC::LocalSessionsDataController*)>(&::VROSC::OldSavesHandler::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x18492fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SaveLoadManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LocalSessionsDataController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OldSavesHandler.Execute
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OldSavesHandler::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::OldSavesHandler::Execute)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1849328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler*>::get(),
                        "Execute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OldSavesHandler.FindUnresgisteredSessions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OldSavesHandler::*)()>(&::VROSC::OldSavesHandler::FindUnresgisteredSessions)> {
  constexpr static std::size_t size = 0x8a4;
  constexpr static std::size_t addrs = 0x18493c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler*>::get(),
                        "FindUnresgisteredSessions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OldSavesHandler.UpdateSessionsFiles
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::VROSC::OldSavesHandler::*)()>(&::VROSC::OldSavesHandler::UpdateSessionsFiles)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1849c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler*>::get(),
                        "UpdateSessionsFiles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OldSavesHandler.PackageSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::VROSC::OldSavesHandler::*)(::StringW)>(&::VROSC::OldSavesHandler::PackageSession)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1849d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler*>::get(),
                        "PackageSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::LocalSessionsDataController*& VROSC::OldSavesHandler::__cordl_internal_get__localSessionsDataController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localSessionsDataController;
}
constexpr ::VROSC::LocalSessionsDataController* const& VROSC::OldSavesHandler::__cordl_internal_get__localSessionsDataController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localSessionsDataController;
}
constexpr void VROSC::OldSavesHandler::__cordl_internal_set__localSessionsDataController(::VROSC::LocalSessionsDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localSessionsDataController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SaveLoadManager>& VROSC::OldSavesHandler::__cordl_internal_get__saveLoadManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveLoadManager;
}
constexpr ::UnityW<::VROSC::SaveLoadManager> const& VROSC::OldSavesHandler::__cordl_internal_get__saveLoadManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveLoadManager;
}
constexpr void VROSC::OldSavesHandler::__cordl_internal_set__saveLoadManager(::UnityW<::VROSC::SaveLoadManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saveLoadManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::OldSavesHandler::_ctor(::VROSC::SaveLoadManager*  saveLoadManager, ::VROSC::LocalSessionsDataController*  localSessionsDataController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SaveLoadManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LocalSessionsDataController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saveLoadManager, localSessionsDataController);
}
inline void VROSC::OldSavesHandler::Execute(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler*>::get(),
                        "Execute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void VROSC::OldSavesHandler::FindUnresgisteredSessions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler*>::get(),
                        "FindUnresgisteredSessions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* VROSC::OldSavesHandler::UpdateSessionsFiles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler*>::get(),
                        "UpdateSessionsFiles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* VROSC::OldSavesHandler::PackageSession(::StringW  sessionName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OldSavesHandler*>::get(),
                        "PackageSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, sessionName);
}
inline ::VROSC::OldSavesHandler* VROSC::OldSavesHandler::New_ctor(::VROSC::SaveLoadManager*  saveLoadManager, ::VROSC::LocalSessionsDataController*  localSessionsDataController)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::OldSavesHandler*>(saveLoadManager, localSessionsDataController));
}
// Ctor Parameters []
constexpr ::VROSC::OldSavesHandler::OldSavesHandler()   {
}
