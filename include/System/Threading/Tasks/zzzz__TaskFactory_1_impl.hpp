#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskFactory_1.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskFactory_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskFactory_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Func_5_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TResult,typename TInstance>
constexpr TInstance& System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>::__cordl_internal_get_m_thisRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_thisRef;
}
template<typename TResult,typename TInstance>
constexpr TInstance const& System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>::__cordl_internal_get_m_thisRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_thisRef;
}
template<typename TResult,typename TInstance>
constexpr void System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>::__cordl_internal_set_m_thisRef(TInstance  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_thisRef, value);
}
template<typename TResult,typename TInstance>
constexpr ::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*& System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>::__cordl_internal_get_m_endMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_endMethod;
}
template<typename TResult,typename TInstance>
constexpr ::System::Func_3<TInstance,::System::IAsyncResult*,TResult>* const& System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>::__cordl_internal_get_m_endMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_endMethod;
}
template<typename TResult,typename TInstance>
constexpr void System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>::__cordl_internal_set_m_endMethod(::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_endMethod, value);
}
template<typename TResult,typename TInstance>
inline void System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>::setStaticF_s_completeFromAsyncResult(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "s_completeFromAsyncResult", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>*>::get>(std::forward<::System::AsyncCallback*>(value));
}
template<typename TResult,typename TInstance>
inline ::System::AsyncCallback* System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>::getStaticF_s_completeFromAsyncResult()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "s_completeFromAsyncResult", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>*>::get>();
}
template<typename TResult,typename TInstance>
inline void System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>::_ctor(TInstance  thisRef, ::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*  endMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, thisRef, endMethod);
}
template<typename TResult,typename TInstance>
inline void System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>::CompleteFromAsyncResult(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>*>::get(),
                        "CompleteFromAsyncResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
template<typename TResult,typename TInstance>
inline void System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>::Complete(TInstance  thisRef, ::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*  endMethod, ::System::IAsyncResult*  asyncResult, bool  requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>*>::get(),
                        "Complete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, thisRef, endMethod, asyncResult, requiresSynchronization);
}
template<typename TResult,typename TInstance>
inline ::System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>* System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>::New_ctor(TInstance  thisRef, ::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*  endMethod)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>*>(thisRef, endMethod));
}
// Ctor Parameters []
template<typename TResult,typename TInstance>
constexpr ::System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult,TInstance>::TaskFactory_1_FromAsyncTrimPromise_1()   {
}
template<typename TResult>
constexpr ::System::Func_2<::System::IAsyncResult*,TResult>*& System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>::__cordl_internal_get_endFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endFunction;
}
template<typename TResult>
constexpr ::System::Func_2<::System::IAsyncResult*,TResult>* const& System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>::__cordl_internal_get_endFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endFunction;
}
template<typename TResult>
constexpr void System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>::__cordl_internal_set_endFunction(::System::Func_2<::System::IAsyncResult*,TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___endFunction, value);
}
template<typename TResult>
constexpr ::System::Action_1<::System::IAsyncResult*>*& System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>::__cordl_internal_get_endAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endAction;
}
template<typename TResult>
constexpr ::System::Action_1<::System::IAsyncResult*>* const& System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>::__cordl_internal_get_endAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endAction;
}
template<typename TResult>
constexpr void System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>::__cordl_internal_set_endAction(::System::Action_1<::System::IAsyncResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___endAction, value);
}
template<typename TResult>
constexpr ::System::Threading::Tasks::Task_1<TResult>*& System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>::__cordl_internal_get_promise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
template<typename TResult>
constexpr ::System::Threading::Tasks::Task_1<TResult>* const& System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>::__cordl_internal_get_promise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
template<typename TResult>
constexpr void System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>::__cordl_internal_set_promise(::System::Threading::Tasks::Task_1<TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___promise, value);
}
template<typename TResult>
inline void System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TResult>
inline void System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>::_FromAsyncImpl_b__0(::System::IAsyncResult*  iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>*>::get(),
                        "<FromAsyncImpl>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iar);
}
template<typename TResult>
inline ::System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>* System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>*>());
}
// Ctor Parameters []
template<typename TResult>
constexpr ::System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>::TaskFactory_1___c__DisplayClass35_0()   {
}
template<typename TResult,typename TArg1>
constexpr ::System::Func_2<::System::IAsyncResult*,TResult>*& System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>::__cordl_internal_get_endFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endFunction;
}
template<typename TResult,typename TArg1>
constexpr ::System::Func_2<::System::IAsyncResult*,TResult>* const& System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>::__cordl_internal_get_endFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endFunction;
}
template<typename TResult,typename TArg1>
constexpr void System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>::__cordl_internal_set_endFunction(::System::Func_2<::System::IAsyncResult*,TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___endFunction, value);
}
template<typename TResult,typename TArg1>
constexpr ::System::Action_1<::System::IAsyncResult*>*& System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>::__cordl_internal_get_endAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endAction;
}
template<typename TResult,typename TArg1>
constexpr ::System::Action_1<::System::IAsyncResult*>* const& System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>::__cordl_internal_get_endAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endAction;
}
template<typename TResult,typename TArg1>
constexpr void System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>::__cordl_internal_set_endAction(::System::Action_1<::System::IAsyncResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___endAction, value);
}
template<typename TResult,typename TArg1>
constexpr ::System::Threading::Tasks::Task_1<TResult>*& System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>::__cordl_internal_get_promise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
template<typename TResult,typename TArg1>
constexpr ::System::Threading::Tasks::Task_1<TResult>* const& System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>::__cordl_internal_get_promise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
template<typename TResult,typename TArg1>
constexpr void System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>::__cordl_internal_set_promise(::System::Threading::Tasks::Task_1<TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___promise, value);
}
template<typename TResult,typename TArg1>
inline void System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TResult,typename TArg1>
inline void System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>::_FromAsyncImpl_b__0(::System::IAsyncResult*  iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>*>::get(),
                        "<FromAsyncImpl>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iar);
}
template<typename TResult,typename TArg1>
inline ::System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>* System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>*>());
}
// Ctor Parameters []
template<typename TResult,typename TArg1>
constexpr ::System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult,TArg1>::TaskFactory_1___c__DisplayClass38_0_1()   {
}
template<typename TResult,typename TArg1,typename TArg2>
constexpr ::System::Func_2<::System::IAsyncResult*,TResult>*& System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>::__cordl_internal_get_endFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endFunction;
}
template<typename TResult,typename TArg1,typename TArg2>
constexpr ::System::Func_2<::System::IAsyncResult*,TResult>* const& System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>::__cordl_internal_get_endFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endFunction;
}
template<typename TResult,typename TArg1,typename TArg2>
constexpr void System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>::__cordl_internal_set_endFunction(::System::Func_2<::System::IAsyncResult*,TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___endFunction, value);
}
template<typename TResult,typename TArg1,typename TArg2>
constexpr ::System::Action_1<::System::IAsyncResult*>*& System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>::__cordl_internal_get_endAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endAction;
}
template<typename TResult,typename TArg1,typename TArg2>
constexpr ::System::Action_1<::System::IAsyncResult*>* const& System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>::__cordl_internal_get_endAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endAction;
}
template<typename TResult,typename TArg1,typename TArg2>
constexpr void System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>::__cordl_internal_set_endAction(::System::Action_1<::System::IAsyncResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___endAction, value);
}
template<typename TResult,typename TArg1,typename TArg2>
constexpr ::System::Threading::Tasks::Task_1<TResult>*& System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>::__cordl_internal_get_promise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
template<typename TResult,typename TArg1,typename TArg2>
constexpr ::System::Threading::Tasks::Task_1<TResult>* const& System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>::__cordl_internal_get_promise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
template<typename TResult,typename TArg1,typename TArg2>
constexpr void System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>::__cordl_internal_set_promise(::System::Threading::Tasks::Task_1<TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___promise, value);
}
template<typename TResult,typename TArg1,typename TArg2>
inline void System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TResult,typename TArg1,typename TArg2>
inline void System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>::_FromAsyncImpl_b__0(::System::IAsyncResult*  iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>*>::get(),
                        "<FromAsyncImpl>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iar);
}
template<typename TResult,typename TArg1,typename TArg2>
inline ::System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>* System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>*>());
}
// Ctor Parameters []
template<typename TResult,typename TArg1,typename TArg2>
constexpr ::System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult,TArg1,TArg2>::TaskFactory_1___c__DisplayClass41_0_2()   {
}
template<typename TResult>
constexpr ::System::Threading::CancellationToken& System::Threading::Tasks::TaskFactory_1<TResult>::__cordl_internal_get_m_defaultCancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultCancellationToken;
}
template<typename TResult>
constexpr ::System::Threading::CancellationToken const& System::Threading::Tasks::TaskFactory_1<TResult>::__cordl_internal_get_m_defaultCancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultCancellationToken;
}
template<typename TResult>
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__cordl_internal_set_m_defaultCancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_defaultCancellationToken = value;
}
template<typename TResult>
constexpr ::System::Threading::Tasks::TaskScheduler*& System::Threading::Tasks::TaskFactory_1<TResult>::__cordl_internal_get_m_defaultScheduler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultScheduler;
}
template<typename TResult>
constexpr ::System::Threading::Tasks::TaskScheduler* const& System::Threading::Tasks::TaskFactory_1<TResult>::__cordl_internal_get_m_defaultScheduler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultScheduler;
}
template<typename TResult>
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__cordl_internal_set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_defaultScheduler, value);
}
template<typename TResult>
constexpr ::System::Threading::Tasks::TaskCreationOptions& System::Threading::Tasks::TaskFactory_1<TResult>::__cordl_internal_get_m_defaultCreationOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultCreationOptions;
}
template<typename TResult>
constexpr ::System::Threading::Tasks::TaskCreationOptions const& System::Threading::Tasks::TaskFactory_1<TResult>::__cordl_internal_get_m_defaultCreationOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultCreationOptions;
}
template<typename TResult>
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__cordl_internal_set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_defaultCreationOptions = value;
}
template<typename TResult>
constexpr ::System::Threading::Tasks::TaskContinuationOptions& System::Threading::Tasks::TaskFactory_1<TResult>::__cordl_internal_get_m_defaultContinuationOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultContinuationOptions;
}
template<typename TResult>
constexpr ::System::Threading::Tasks::TaskContinuationOptions const& System::Threading::Tasks::TaskFactory_1<TResult>::__cordl_internal_get_m_defaultContinuationOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultContinuationOptions;
}
template<typename TResult>
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__cordl_internal_set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_defaultContinuationOptions = value;
}
template<typename TResult>
inline void System::Threading::Tasks::TaskFactory_1<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1<TResult>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TResult>
inline void System::Threading::Tasks::TaskFactory_1<TResult>::_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1<TResult>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
template<typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskFactory_1<TResult>::StartNew(::System::Func_2<::System::Object*,TResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1<TResult>*>::get(),
                        "StartNew",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Object*,TResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal_method, function, state, cancellationToken, creationOptions, scheduler);
}
template<typename TResult>
inline void System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncCoreLogic(::System::IAsyncResult*  iar, ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Threading::Tasks::Task_1<TResult>*  promise, bool  requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1<TResult>*>::get(),
                        "FromAsyncCoreLogic",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::IAsyncResult*,TResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::IAsyncResult*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
template<typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskFactory_1<TResult>::FromAsync(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,TResult>*  endMethod, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1<TResult>*>::get(),
                        "FromAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::IAsyncResult*,TResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal_method, beginMethod, endMethod, state);
}
template<typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncImpl(::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1<TResult>*>::get(),
                        "FromAsyncImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::IAsyncResult*,TResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::IAsyncResult*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TResult>
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskFactory_1<TResult>::FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,TResult>*  endMethod, TArg1  arg1, ::System::Object*  state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1<TResult>*>::get(),
                    "FromAsync",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                    ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::IAsyncResult*,TResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TResult>
template<typename TArg1>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncImpl(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1<TResult>*>::get(),
                    "FromAsyncImpl",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                    ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::IAsyncResult*,TResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::IAsyncResult*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TResult>
template<typename TArg1,typename TArg2>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncImpl(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_2<::System::IAsyncResult*,TResult>*  endFunction, ::System::Action_1<::System::IAsyncResult*>*  endAction, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1<TResult>*>::get(),
                    "FromAsyncImpl",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                    ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::IAsyncResult*,TResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::IAsyncResult*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TResult>
template<typename TInstance,typename TArgs>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncTrim(TInstance  thisRef, TArgs  args, ::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*  endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory_1<TResult>*>::get(),
                    "FromAsyncTrim",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                    ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<TInstance,TArgs,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<TInstance,::System::IAsyncResult*,TResult>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
template<typename TResult>
inline ::System::Threading::Tasks::TaskFactory_1<TResult>* System::Threading::Tasks::TaskFactory_1<TResult>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::TaskFactory_1<TResult>*>());
}
template<typename TResult>
inline ::System::Threading::Tasks::TaskFactory_1<TResult>* System::Threading::Tasks::TaskFactory_1<TResult>::New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::TaskFactory_1<TResult>*>(cancellationToken, creationOptions, continuationOptions, scheduler));
}
// Ctor Parameters []
template<typename TResult>
constexpr ::System::Threading::Tasks::TaskFactory_1<TResult>::TaskFactory_1()   {
}
