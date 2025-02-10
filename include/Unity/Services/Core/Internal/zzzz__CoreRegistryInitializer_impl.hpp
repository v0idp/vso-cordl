#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/CoreRegistryInitializer.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreRegistryInitializer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreRegistryInitializer_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreRegistry_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__DependencyTree_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IInitializablePackage_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__PackageInitializationInfo_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d::*)()>(&::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d::MoveNext)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x2e9e8e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2e9ecf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "package", ty: "::Unity::Services::Core::Internal::IInitializablePackage*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*  __4__this, ::Unity::Services::Core::Internal::IInitializablePackage*  package, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->package = package;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d()   {
}
//  Writing Method size for method: ::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d::*)()>(&::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x2e9ed60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2e9f1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "package", ty: "::Unity::Services::Core::Internal::IInitializablePackage*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*  __4__this, ::Unity::Services::Core::Internal::IInitializablePackage*  package, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->package = package;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d()   {
}
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::*)()>(&::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9e630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0._InitializeRegistryAsync_g__TryInitializePackageAsync_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::*)(::Unity::Services::Core::Internal::IInitializablePackage*)>(&::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::_InitializeRegistryAsync_g__TryInitializePackageAsync_0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2e9e638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*>::get(),
                        "<InitializeRegistryAsync>g__TryInitializePackageAsync|0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IInitializablePackage*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0._InitializeRegistryAsync_g__GetPackageAt_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Internal::IInitializablePackage* (::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::*)(int32_t)>(&::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::_InitializeRegistryAsync_g__GetPackageAt_1)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2e9e70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*>::get(),
                        "<InitializeRegistryAsync>g__GetPackageAt|1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0._InitializeRegistryAsync_g__InitializePackageAsync_2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::*)(::Unity::Services::Core::Internal::IInitializablePackage*)>(&::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::_InitializeRegistryAsync_g__InitializePackageAsync_2)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2e9e79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*>::get(),
                        "<InitializeRegistryAsync>g__InitializePackageAsync|2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IInitializablePackage*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0._InitializeRegistryAsync_g__Fail_3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::*)()>(&::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::_InitializeRegistryAsync_g__Fail_3)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2e9e870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*>::get(),
                        "<InitializeRegistryAsync>g__Fail|3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Diagnostics::Stopwatch*& Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::__cordl_internal_get_stopwatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopwatch;
}
constexpr ::System::Diagnostics::Stopwatch* const& Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::__cordl_internal_get_stopwatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopwatch;
}
constexpr void Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::__cordl_internal_set_stopwatch(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stopwatch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*& Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::__cordl_internal_get_packagesInitInfos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packagesInitInfos;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>* const& Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::__cordl_internal_get_packagesInitInfos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packagesInitInfos;
}
constexpr void Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::__cordl_internal_set_packagesInitInfos(::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___packagesInitInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Exception*>*& Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::__cordl_internal_get_failureReasons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureReasons;
}
constexpr ::System::Collections::Generic::List_1<::System::Exception*>* const& Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::__cordl_internal_get_failureReasons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureReasons;
}
constexpr void Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::__cordl_internal_set_failureReasons(::System::Collections::Generic::List_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___failureReasons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Internal::CoreRegistryInitializer*& Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Unity::Services::Core::Internal::CoreRegistryInitializer* const& Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::__cordl_internal_set___4__this(::Unity::Services::Core::Internal::CoreRegistryInitializer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Internal::DependencyTree*& Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::__cordl_internal_get_dependencyTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dependencyTree;
}
constexpr ::Unity::Services::Core::Internal::DependencyTree* const& Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::__cordl_internal_get_dependencyTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dependencyTree;
}
constexpr void Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::__cordl_internal_set_dependencyTree(::Unity::Services::Core::Internal::DependencyTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dependencyTree)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::_InitializeRegistryAsync_g__TryInitializePackageAsync_0(::Unity::Services::Core::Internal::IInitializablePackage*  package)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*>::get(),
                        "<InitializeRegistryAsync>g__TryInitializePackageAsync|0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IInitializablePackage*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, package);
}
inline ::Unity::Services::Core::Internal::IInitializablePackage* Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::_InitializeRegistryAsync_g__GetPackageAt_1(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*>::get(),
                        "<InitializeRegistryAsync>g__GetPackageAt|1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::IInitializablePackage*, false>(this, ___internal_method, index);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::_InitializeRegistryAsync_g__InitializePackageAsync_2(::Unity::Services::Core::Internal::IInitializablePackage*  package)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*>::get(),
                        "<InitializeRegistryAsync>g__InitializePackageAsync|2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IInitializablePackage*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, package);
}
inline void Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::_InitializeRegistryAsync_g__Fail_3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*>::get(),
                        "<InitializeRegistryAsync>g__Fail|3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0* Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0::CoreRegistryInitializer___c__DisplayClass3_0()   {
}
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3::*)()>(&::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x2e9f228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e9f844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::CoreRegistryInitializer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3::CoreRegistryInitializer__InitializeRegistryAsync_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>  __t__builder, ::Unity::Services::Core::Internal::CoreRegistryInitializer*  __4__this, ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*  __8__1, int32_t  _i_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__8__1 = __8__1;
this->_i_5__2 = _i_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3::CoreRegistryInitializer__InitializeRegistryAsync_d__3()   {
}
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreRegistryInitializer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreRegistryInitializer::*)(::Unity::Services::Core::Internal::CoreRegistry*, ::System::Collections::Generic::List_1<int32_t>*)>(&::Unity::Services::Core::Internal::CoreRegistryInitializer::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2e9e520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreRegistry*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreRegistryInitializer.InitializeRegistryAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>* (::Unity::Services::Core::Internal::CoreRegistryInitializer::*)()>(&::Unity::Services::Core::Internal::CoreRegistryInitializer::InitializeRegistryAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2e9e54c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer*>::get(),
                        "InitializeRegistryAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Core::Internal::CoreRegistry*& Unity::Services::Core::Internal::CoreRegistryInitializer::__cordl_internal_get_m_Registry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Registry;
}
constexpr ::Unity::Services::Core::Internal::CoreRegistry* const& Unity::Services::Core::Internal::CoreRegistryInitializer::__cordl_internal_get_m_Registry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Registry;
}
constexpr void Unity::Services::Core::Internal::CoreRegistryInitializer::__cordl_internal_set_m_Registry(::Unity::Services::Core::Internal::CoreRegistry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Registry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Unity::Services::Core::Internal::CoreRegistryInitializer::__cordl_internal_get_m_SortedPackageTypeHashes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortedPackageTypeHashes;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Unity::Services::Core::Internal::CoreRegistryInitializer::__cordl_internal_get_m_SortedPackageTypeHashes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortedPackageTypeHashes;
}
constexpr void Unity::Services::Core::Internal::CoreRegistryInitializer::__cordl_internal_set_m_SortedPackageTypeHashes(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SortedPackageTypeHashes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Core::Internal::CoreRegistryInitializer::_ctor(::Unity::Services::Core::Internal::CoreRegistry*  registry, ::System::Collections::Generic::List_1<int32_t>*  sortedPackageTypeHashes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreRegistry*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, registry, sortedPackageTypeHashes);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>* Unity::Services::Core::Internal::CoreRegistryInitializer::InitializeRegistryAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistryInitializer*>::get(),
                        "InitializeRegistryAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::CoreRegistryInitializer* Unity::Services::Core::Internal::CoreRegistryInitializer::New_ctor(::Unity::Services::Core::Internal::CoreRegistry*  registry, ::System::Collections::Generic::List_1<int32_t>*  sortedPackageTypeHashes)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::CoreRegistryInitializer*>(registry, sortedPackageTypeHashes));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::CoreRegistryInitializer::CoreRegistryInitializer()   {
}
