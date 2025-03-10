#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/TakeNObservable_1.hpp"
#include "System/zzzz__IObservable_1_impl.hpp"
#include "System/zzzz__IObserver_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TakeNObservable_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TakeNObservable_1_def.hpp"
template<typename TValue>
constexpr ::System::IObserver_1<TValue>*& UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::__cordl_internal_get_m_Observer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Observer;
}
template<typename TValue>
constexpr ::System::IObserver_1<TValue>* const& UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::__cordl_internal_get_m_Observer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Observer;
}
template<typename TValue>
constexpr void UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::__cordl_internal_set_m_Observer(::System::IObserver_1<TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_Observer, value);
}
template<typename TValue>
constexpr int32_t& UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::__cordl_internal_get_m_Remaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Remaining;
}
template<typename TValue>
constexpr int32_t const& UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::__cordl_internal_get_m_Remaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Remaining;
}
template<typename TValue>
constexpr void UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::__cordl_internal_set_m_Remaining(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Remaining = value;
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::_ctor(::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*  observable, ::System::IObserver_1<TValue>*  observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TValue>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, observable, observer);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>*>::get(),
                        "OnCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::OnError(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>*>::get(),
                        "OnError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::OnNext(TValue  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>*>::get(),
                        "OnNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template<typename TValue>
inline ::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>* UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::New_ctor(::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*  observable, ::System::IObserver_1<TValue>*  observer)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>*>(observable, observer));
}
/// @brief Convert operator to "::System::IObserver_1<TValue>"
template<typename TValue>
constexpr  UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::operator ::System::IObserver_1<TValue>*() noexcept {
return static_cast<::System::IObserver_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<TValue>"
template<typename TValue>
constexpr ::System::IObserver_1<TValue>* UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::i___System__IObserver_1_TValue_() noexcept {
return static_cast<::System::IObserver_1<TValue>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TValue>
constexpr ::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::TakeNObservable_1_Take()   {
}
template<typename TValue>
constexpr ::System::IObservable_1<TValue>*& UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__cordl_internal_get_m_Source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Source;
}
template<typename TValue>
constexpr ::System::IObservable_1<TValue>* const& UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__cordl_internal_get_m_Source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Source;
}
template<typename TValue>
constexpr void UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__cordl_internal_set_m_Source(::System::IObservable_1<TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_Source, value);
}
template<typename TValue>
constexpr int32_t& UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__cordl_internal_get_m_Count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Count;
}
template<typename TValue>
constexpr int32_t const& UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__cordl_internal_get_m_Count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Count;
}
template<typename TValue>
constexpr void UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__cordl_internal_set_m_Count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Count = value;
}
template<typename TValue>
inline void UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::_ctor(::System::IObservable_1<TValue>*  source, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, count);
}
template<typename TValue>
inline ::System::IDisposable* UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::Subscribe(::System::IObserver_1<TValue>*  observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*>::get(),
                        "Subscribe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TValue>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal_method, observer);
}
template<typename TValue>
inline ::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>* UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::New_ctor(::System::IObservable_1<TValue>*  source, int32_t  count)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*>(source, count));
}
/// @brief Convert operator to "::System::IObservable_1<TValue>"
template<typename TValue>
constexpr  UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::operator ::System::IObservable_1<TValue>*() noexcept {
return static_cast<::System::IObservable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObservable_1<TValue>"
template<typename TValue>
constexpr ::System::IObservable_1<TValue>* UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::i___System__IObservable_1_TValue_() noexcept {
return static_cast<::System::IObservable_1<TValue>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TValue>
constexpr ::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::TakeNObservable_1()   {
}
