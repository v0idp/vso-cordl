#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectFactory_2.hpp"
#include "UnityEngine/UIElements/zzzz__BaseUxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IBaseUxmlFactory_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IBaseUxmlObjectFactory_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlObjectFactory_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
template<typename TCreatedType,typename TTraits>
inline TCreatedType UnityEngine::UIElements::UxmlObjectFactory_2<TCreatedType,TTraits>::CreateObject(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectFactory_2<TCreatedType,TTraits>*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<TCreatedType, false>(this, ___internal_method, bag, cc);
}
template<typename TCreatedType,typename TTraits>
inline void UnityEngine::UIElements::UxmlObjectFactory_2<TCreatedType,TTraits>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectFactory_2<TCreatedType,TTraits>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TCreatedType,typename TTraits>
inline ::UnityEngine::UIElements::UxmlObjectFactory_2<TCreatedType,TTraits>* UnityEngine::UIElements::UxmlObjectFactory_2<TCreatedType,TTraits>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UxmlObjectFactory_2<TCreatedType,TTraits>*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IUxmlObjectFactory_1<TCreatedType>"
template<typename TCreatedType,typename TTraits>
constexpr  UnityEngine::UIElements::UxmlObjectFactory_2<TCreatedType,TTraits>::operator ::UnityEngine::UIElements::IUxmlObjectFactory_1<TCreatedType>*() noexcept {
return static_cast<::UnityEngine::UIElements::IUxmlObjectFactory_1<TCreatedType>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IUxmlObjectFactory_1<TCreatedType>"
template<typename TCreatedType,typename TTraits>
constexpr ::UnityEngine::UIElements::IUxmlObjectFactory_1<TCreatedType>* UnityEngine::UIElements::UxmlObjectFactory_2<TCreatedType,TTraits>::i___UnityEngine__UIElements__IUxmlObjectFactory_1_TCreatedType_() noexcept {
return static_cast<::UnityEngine::UIElements::IUxmlObjectFactory_1<TCreatedType>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IBaseUxmlObjectFactory"
template<typename TCreatedType,typename TTraits>
constexpr  UnityEngine::UIElements::UxmlObjectFactory_2<TCreatedType,TTraits>::operator ::UnityEngine::UIElements::IBaseUxmlObjectFactory*() noexcept {
return static_cast<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IBaseUxmlObjectFactory"
template<typename TCreatedType,typename TTraits>
constexpr ::UnityEngine::UIElements::IBaseUxmlObjectFactory* UnityEngine::UIElements::UxmlObjectFactory_2<TCreatedType,TTraits>::i___UnityEngine__UIElements__IBaseUxmlObjectFactory() noexcept {
return static_cast<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IBaseUxmlFactory"
template<typename TCreatedType,typename TTraits>
constexpr  UnityEngine::UIElements::UxmlObjectFactory_2<TCreatedType,TTraits>::operator ::UnityEngine::UIElements::IBaseUxmlFactory*() noexcept {
return static_cast<::UnityEngine::UIElements::IBaseUxmlFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IBaseUxmlFactory"
template<typename TCreatedType,typename TTraits>
constexpr ::UnityEngine::UIElements::IBaseUxmlFactory* UnityEngine::UIElements::UxmlObjectFactory_2<TCreatedType,TTraits>::i___UnityEngine__UIElements__IBaseUxmlFactory() noexcept {
return static_cast<::UnityEngine::UIElements::IBaseUxmlFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TCreatedType,typename TTraits>
constexpr ::UnityEngine::UIElements::UxmlObjectFactory_2<TCreatedType,TTraits>::UxmlObjectFactory_2()   {
}
